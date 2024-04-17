#ifndef FILTER_DEF_H_
#define FILTER_DEF_H_

// sobel mask parameters
const int MASK_X = 5;
const int MASK_Y = 5;

// Sobel Filter inner transport addresses
// Used between blocking_transport() & do_filter()
const int SOBEL_FILTER_R_ADDR = 0x00000000;
const int SOBEL_FILTER_RESULT_ADDR = 0x00000004;
const int SOBEL_FILTER_CHECK_ADDR = 0x00000008;

union word {
  int sint;
  unsigned int uint;
  unsigned char uc[4];
};

// Sobel mask
const int mask[MASK_X][MASK_Y] = {{1, 4, 7, 4, 1},      //Gaussian blur filter
                                   {4, 16, 26, 16, 4},  //Divide 273 at the end
                                   {7, 26, 41, 26, 7},
                                   {4, 16, 26, 16, 4},
                                   {1, 4, 7, 4, 1}};
#endif
