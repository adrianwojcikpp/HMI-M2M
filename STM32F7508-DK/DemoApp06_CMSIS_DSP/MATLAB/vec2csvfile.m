function vec2csvfile(filename, vec)

    fileID = fopen(filename,'w');
    for i = 1 : length(vec)-1
        fprintf(fileID,'%s,\n', float2hex(vec(i)));
    end
    fprintf(fileID,'%s\n', float2hex(vec(end)));
    fclose(fileID);

end

function hex_str = float2hex(f_val)

    f = single(f_val);
    byte_array = typecast(f, 'uint32');
    hex_str = dec2hex(byte_array, 8);
    hex_str = hex_str(:)';
    hex_str = ['0x' hex_str];

end