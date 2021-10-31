#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(void) {
  uint8_t var_1 = 0xFE, var_2 = 0xF0;

  uint8_t var_3 = var_1 & var_2;

  printf("Output : %X\n", var_3);

  return EXIT_SUCCESS;
}