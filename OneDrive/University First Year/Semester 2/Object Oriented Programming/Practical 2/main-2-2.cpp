#include <stdlib.h>

#include <iostream>

int binary_to_int(int binary_digits[], int number_of_digits);

int main(int argc, char **argv) {
  int binary_digits[8] = {1, 1, 1, 1, 1, 1, 1, 1};

  int value = binary_to_int(binary_digits, 8);

  printf("%d\n", value);
  return 0;
}