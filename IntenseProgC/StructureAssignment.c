#include <stdio.h>

struct numbers{
  int num1, num2;
};

struct alpha{
  char c1, c2;
};

int main(int argc, char const *argv[]) {
                                                  //Assignment using designated initialization.
  struct numbers s1 = {.num2 = 22, .num1 = 11};
  struct numbers s2 = {.num2 = 30};

  struct alpha char1 = {.c2 = 'A', .c1 = 'M'};
  struct alpha char2 = {.c2 = 'H'};


  printf("num1: %d, num2: %d\n", s1.num1, s1.num2);
  printf("num1: %d\n", s2.num2);

  printf("c1: %c, c2: %c\n", char1.c1, char1.c2);
  printf("c2: %c\n", char2.c1);


  return 0;
}
