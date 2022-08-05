#include <stdlib.h>

#include <bitset>
#include <iostream>
#include <string>
using namespace std;

int array_min(int integers[], int length) {
  int result = -1;
  if (length > 0) {
    result = integers[0];
    for (int a = 0; a < length; a++) {
      if (integers[a] < result) {
        result = integers[a];
      }
    }
  }
  return result;
}

int array_max(int integers[], int length) {
  int result = -1;
  if (length > 0) {
    result = integers[0];
    for (int a = 0; a < length; a++) {
      if (integers[a] > result) {
        result = integers[a];
      }
    }
  }
  return result;
}

int sum_min_max(int integers[], int length) {
  int result = -1;
  if (length > 0) {
    int min = array_min(integers, length);
    int max = array_max(integers, length);
    result = min + max;
  }
  return result;
}