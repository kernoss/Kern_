#include <stdlib.h>

#include <iostream>

extern void count_digits(int array[4][4]);

int main(int argc, char **argv) {
  int array[4][4] = {{1, 2, 3, 4}, {5, 2, 7, 8}, {9, 1, 2, 3}, {4, 5, 6, 7}};

  count_digits(array);

  return 0;
}