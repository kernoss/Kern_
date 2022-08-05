#include <stdlib.h>

#include <bitset>
#include <iostream>
#include <string>
using namespace std;

void print_binary_str(std::string decimal_number) {
  int length = decimal_number.size();

  long i = stoi(decimal_number);

  std::cout << std::bitset<9 * sizeof(int)>(i) << std::endl;
}