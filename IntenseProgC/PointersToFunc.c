#include <stdio.h>

void salaryhike(int *var, int b){       //void = no return
  *var = *var+b;                      //pointer var
}

int main(int argc, char const *argv[]) {
  int salary = 0, bonus = 0;

  printf("Enter the employee salary: ");
  scanf("%d", &salary);

  printf("Enter the bonus: ");
  scanf("%d", &bonus);

  salaryhike(&salary, bonus);

  printf("Final salary is: %d", salary);
  return 0;
}
