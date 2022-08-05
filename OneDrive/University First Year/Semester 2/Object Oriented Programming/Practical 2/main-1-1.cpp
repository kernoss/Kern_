#include <stdlib.h>

#include <iostream>

extern int sum_diagonal(int array[4][4]);

int main(int argc, char **argv) {
  int array[4][4] = {
      {1, 2, 3, 4}, {5, 2, 7, 8}, {9, 10, 2, 12}, {13, 14, 15, 2}};

  int a = sum_diagonal(array);
  printf("Answer = %d\n", a);

  return 0;
}