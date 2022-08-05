#include <stdlib.h>

#include <iostream>

int newArray[3][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};

void print_summed(int array1[3][3], int array2[3][3]) {
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      newArray[i][j] = array1[i][j] + array2[i][j];
      printf("%d ", newArray[i][j]);
    }
    printf("\n");
  }
}