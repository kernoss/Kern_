#include <stdlib.h>

#include <bitset>
#include <iostream>
#include <string>
using namespace std;

int binary_to_int(int binary_digits[], int number_of_digits) {
  string s = "";
  for (int a = 0; a < number_of_digits; a++) {
    s = s + std::to_string(binary_digits[a]);
  }

  int i = stoi(s, 0, 2);
  // printf("printf   %s :  %d\n", s.c_str(), i);
  std::cout << s;

  return i;
}