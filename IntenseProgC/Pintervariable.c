#include <stdio.h>

int main() {

  //Pointer variable
  int *p;

  //array declaration
int val[7] = {11, 22, 33, 44, 55, 66, 77};

//Assign the address of val[0] to the pointer
//p = var. Does the same as above because array name represents the address of the fisrt element
p = &val[0];

for (int i = 0; i < 7; i++) {
  printf("val[%d]: value is %d and address is %p\n", i, *p, p);  /* incrementing the pointer so taht it points to the next element on every increment */
  p++;
}
  return 0;
}
