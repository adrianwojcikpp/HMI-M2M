#include myFilter.h  
// Filter state
uint32_t myFilter_state_hex[MYFILTER_NUM_TAPS+MYFILTER_BLOCK_SIZE-1] = {
  #include "myFilter_state_init.csv"
};
float32_t *myFilter_state = (float32_t*)myFilter_state_hex;
// Filter coefficients
uint32_t myFilter_coeffs_hex[MYFILTER_NUM_TAPS] = {
  #include "myFilter_coeffs.csv"
};
float32_t *myFilter_coeffs = (float32_t*)myFilter_coeffs_hex;
// Filter instance
arm_fir_instance_f32 myFilter;
