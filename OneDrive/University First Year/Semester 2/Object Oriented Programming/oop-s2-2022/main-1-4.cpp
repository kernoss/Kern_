#include <stdlib.h>

#include <iostream>

extern void print_scaled(int array[3][3], int scale);

int main(int argc, char **argv) {
  int scale = 3;
  int array[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

  print_scaled(array, scale);
}