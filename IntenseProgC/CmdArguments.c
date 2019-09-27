#include <stdio.h>

int main(int argc, char const *argv[]) {
  printf("\n Name of my program %s \t", argv[0]);

  if (argc == 2) {
    printf("\n Value given by user is: %s \t", argv[1]);
  } else if (argc > 2) {
    printf("\n Many values given by user\n");
  } else {
    printf("\n Single value expected \n");       //go to linux terminal and type ./a.out
  }
  return 0;
}
