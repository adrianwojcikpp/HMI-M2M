#ifndef INC_MYFILTER_H_
#define INC_MYFILTER_H_
#include "arm_math.h"
#define MYFILTER_NUM_TAPS  58
#define MYFILTER_BLOCK_SIZE  1
// Filter state
extern float32_t *myFilter_state;
// Filter coefficients
extern float32_t *myFilter_coeffs;
// Filter instance
extern arm_fir_instance_f32 myFilter;
#endif // INC_MYFILTER_H_
