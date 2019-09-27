#include <stdio.h>

int main(void) {

  int dataset[2][4] = {{'#', 88, 89, 90}, {'?', 65, 66, 67}};

  printf("Address Top Row Plus decimal value: %p", &dataset[0]);
  printf("%d", dataset[0][1]);
  printf("%d", dataset[0][1]);
  printf("%d", dataset[0][1]);
  printf("%d\n", dataset[0][1]);

  printf("Address Bottom Row Plus decimal value: %p", &dataset[1]);
  printf("%d", dataset[1][1]);
  printf("%d", dataset[1][2]);
  printf("%d", dataset[1][3]);
  printf("%d\n", dataset[1][4]);

  return 0;
}
