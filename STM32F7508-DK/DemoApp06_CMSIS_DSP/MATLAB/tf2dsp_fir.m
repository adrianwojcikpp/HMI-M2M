function tf2dsp_fir(varname, fir_coeffs, blocksize)

    vec2csvfile([varname '_coeffs.csv'], fir_coeffs);
    vec2csvfile([varname '_state_init.csv'], zeros(size(fir_coeffs)));
   
    source_file = {
        ['#include ' varname '.h  '                                                                         ];
        ['// Filter state'                                                                                  ];
        ['uint32_t ' varname '_state_hex[' upper(varname) '_NUM_TAPS+' upper(varname) '_BLOCK_SIZE-1] = {'  ];  % numTaps+blockSize-1
        ['  #include "' varname '_state_init.csv"'                                                          ];
        ['};'                                                                                               ];
        ['float32_t *' varname '_state = (float32_t*)' varname '_state_hex;'                                ];
        ['// Filter coefficients'                                                                           ];
        ['uint32_t ' varname '_coeffs_hex[' upper(varname) '_NUM_TAPS] = {'                                 ];
        ['  #include "' varname '_coeffs.csv"'                                                              ];
        ['};'                                                                                               ]; 
        ['float32_t *' varname '_coeffs = (float32_t*)' varname '_coeffs_hex;'                              ];
        ['// Filter instance'                                                                               ];  
        ['arm_fir_instance_f32 ' varname ';'                                                                    ];
    };
    
    fileID = fopen([varname '.c'],'w');
    for i = 1 : length(source_file)
        fprintf(fileID,'%s\n', source_file{i});
    end
    fclose(fileID);
    
    header_file = {
        ['#ifndef INC_' upper(varname) '_H_'                                   ];
        ['#define INC_' upper(varname) '_H_'                                   ];
        ['#include "arm_math.h"'                                               ];
        ['#define ' upper(varname) '_NUM_TAPS  ' num2str(length(fir_coeffs))   ];
        ['#define ' upper(varname) '_BLOCK_SIZE  ' num2str(blocksize)          ];
        ['// Filter state'                                                     ];
        ['extern float32_t *' varname '_state;'                                ];
        ['// Filter coefficients'                                              ];
        ['extern float32_t *' varname '_coeffs;'                               ];
        ['// Filter instance'                                                  ];       
        ['extern arm_fir_instance_f32 ' varname ';'                                ];
        ['#endif // INC_' upper(varname) '_H_'                                 ];
    };
    
    fileID = fopen([varname '.h'],'w');
    for i = 1 : length(header_file)
        fprintf(fileID,'%s\n', header_file{i});
    end
    fclose(fileID);
    
end
