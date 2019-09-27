#include <stdio.h>
#include "HFile.h"

int main(int argc, char const *argv[]) {
  printf("Hello, my name is: %s\n", myName);

  int a = 3;
  int b = 2;
  int c = myResult(a, b);

  printf("Result is: %d\n", c);
  return 0;
}
