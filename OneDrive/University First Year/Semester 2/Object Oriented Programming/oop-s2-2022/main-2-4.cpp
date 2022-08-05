#include <stdlib.h>

#include <iostream>

extern int sum_min_max(int integers[], int length);

int main(int argc, char **argv) {
  int integers[8] = {1, 1, 1, 1, 1, 5, 1, 2};

  int value = sum_min_max(integers, 8);

  printf("%d\n", value);

  return value;
}