#include <stdlib.h>

#include <bitset>
#include <iostream>
#include <string>
using namespace std;

int sum_if_palindrome(int integers[], int length) {
  int result = -1;

  if (length > 0) {
    result = 0;
    for (int a = 0; a < length; a++) {
      result += integers[a];
    }
  }

  // printf("sum: %d\n", result);
  return result;
}

bool is_palindrome(int integers[], int length) {
  bool result = false;
  if (length > 0) {
    int rem = length % 2;
    if (rem == 0) {
      int size = length / 2;
      result = true;
      for (int a = 0; a < size; a++) {
        if (integers[a] != integers[length - 1 - a]) {
          result = false;
          break;
        }
      }
    }
  }

  //   if (result) {
  //     printf("TRUE\n");
  //   } else {
  //     printf("FALSE\n");
  //   }
  return result;
}

int sum_array_elements(int integers[], int length) {
  int result = -1;
  if (length > 0) {
    if (is_palindrome(integers, length)) {
      result = sum_if_palindrome(integers, length);
    } else {
      result = -2;
    }
  }
  return result;
}