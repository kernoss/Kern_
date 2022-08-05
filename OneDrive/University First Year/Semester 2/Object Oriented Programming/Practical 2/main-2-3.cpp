#include <stdlib.h>

#include <iostream>

extern int sum_array_elements(int integers[], int length);

int main(int argc, char **argv) {
  int integers[8] = {1, 1, 1, 1, 1, 1, 1, 2};

  int value = sum_array_elements(integers, 8);

  printf("%d\n", value);

  return value;
}