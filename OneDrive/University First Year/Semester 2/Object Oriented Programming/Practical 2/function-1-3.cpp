#include <stdlib.h>

#include <iostream>

void count_digits(int array[4][4]) {
  int zeroCount = 0;
  int oneCount = 0;
  int twoCount = 0;
  int threeCount = 0;
  int fourCount = 0;
  int fiveCount = 0;
  int sixCount = 0;
  int sevenCount = 0;
  int eightCount = 0;
  int nineCount = 0;

  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      if (array[i][j] == 0) {
        zeroCount = zeroCount + 1;
      } else if (array[i][j] == 1) {
        oneCount = oneCount + 1;
      } else if (array[i][j] == 2) {
        twoCount = twoCount + 1;
      } else if (array[i][j] == 3) {
        threeCount = threeCount + 1;
      } else if (array[i][j] == 4) {
        fourCount = fourCount + 1;
      } else if (array[i][j] == 5) {
        fiveCount = fiveCount + 1;
      } else if (array[i][j] == 6) {
        sixCount = sixCount + 1;
      } else if (array[i][j] == 7) {
        sevenCount = sevenCount + 1;
      } else if (array[i][j] == 8) {
        eightCount = eightCount + 1;
      } else if (array[i][j] == 9) {
        nineCount = nineCount + 1;
      }
    }
  }

  printf("0:%d;1:%d;2:%d;3:%d;4:%d;5:%d;6:%d;7:%d;8:%d;9;%d;\n", zeroCount,
         oneCount, twoCount, threeCount, fourCount, fiveCount, sixCount,
         sevenCount, eightCount, nineCount);
}