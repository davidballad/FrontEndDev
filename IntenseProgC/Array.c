#include <stdio.h>
#include <unistd.h>

int main(int argc, char const *argv[]) {
  int x [5] = {100, 200, 300, 400, 500};
  printf("Array position 5 = %d", x[4] );

  char c[30] = "David Bucheli";
  printf("\nC string = %s\n", c);
  printf("C3 location: %c\n", c[2]);

  int table[0][4];
  int n;
  //n = sizeof(table)
  table[0][4] = 1;
  //printf("Table is %d\n", n/sizeof(int));

  int dimentional[2][2][2];
  dimentional[1][1][1] = 30;
  printf("Location value: %d\n", dimentional[1][1][1]);
  return 0;
}
