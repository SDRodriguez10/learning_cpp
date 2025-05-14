#ifndef PSD_UTILS
#define PSD_UTILS
// Channelizer for pre-FFT transform
int channelizer(int vec_i, int vec_q);

// Actual PSD algos
int welch_transform(int vec_i, int vec_q);
int bartlett_transform(int vec_i, int vec_q);
int custom_FFT(int vec_i, int vec_q);
#endif