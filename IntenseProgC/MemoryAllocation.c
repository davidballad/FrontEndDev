#include <stdio.h>
#include <string.h>

struct student{
  int id1;
  int id2;
  char a;
  char b;
  float percent;
};

int main(int argc, char const *argv[]) {
  int i;
  struct student record1 = {1, 2, 'A', 'B', 99.6};

  printf("Size of structure in bytes: %d\n", sizeof(record1));

  printf("\nAddress of id1     = %u", &record1.id1);
  printf("\nAddress of id2     = %u", &record1.id2);
  printf("\nAddress of a       = %u", &record1.a);
  printf("\nAddress of b       = %u", &record1.b);
  printf("\nAddress of percent = %u", &record1.percent);

  return 0;
}
