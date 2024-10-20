#include "grains.h"
#include "math.h"


uint64_t square(uint8_t index) {
  if (index < 1 || index > 64) {
    return 0;
  }

  return pow(2, index - 1);
}

uint64_t total(void) {
  uint64_t sum = 0;
  int n;

  for (n = 1; n <= 64; n++) {
    sum = sum + square(n);
  }

  return sum;
}
