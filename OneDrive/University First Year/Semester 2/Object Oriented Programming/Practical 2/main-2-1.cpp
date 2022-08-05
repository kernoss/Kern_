#include <stdlib.h>

#include <iostream>

extern void print_binary_str(std::string decimal_number);

int main(int argc, char **argv) {
  print_binary_str("511");
  return 0;
}