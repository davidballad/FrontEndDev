#include <stdio.h>

int addition(int num1, int num2){

  int sum;
  sum = num1 + num2;

  return sum;
}

int main() {

  int var1, var2;
  printf("Enter Number 1: " );
  scanf("%s\n", &var1);
  printf("Enter Number 2: ");
  scanf("%s\n", &var2);

  int res = addition(var1, var2);
  printf("Output: %d ", &res);

  return 0;
}
