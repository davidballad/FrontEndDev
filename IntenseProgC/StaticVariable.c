#include <stdio.h>

int statVariable(){
  int a = 10;
  static int b = 10;      //useful when creating back accounts

  a += 1;
  b += 1;

  printf("Int a = %d\t", a);
  printf("Static int = %d\n", b);
}


int main() {
  int count;
  for (count = 0; count < 5; count++) {
    statVariable();
  }
}
