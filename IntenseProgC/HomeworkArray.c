// David Balladares
// CS 288
// 7/26/2019

#include <stdio.h>

int main(int argc, char const *argv[]) {

  int *p;
  int two[2][3];
  two[1][1] = 'g';
  two[1][2] = 'd';
  two[1][3] = 'b';

  printf("FI:        %d\n", two[1][1]);
  printf("MI:        %d\n", two[1][2]);
  printf("LI:        %d\n", two[1][3]);

  two[2][1] = 43672;
  two[2][2] = 90;
  two[2][3] = 80;

  printf("Date 7/22/19: %d\n", two[2][1]);
  printf("High Temp:    %d\n", two[2][2]);
  printf("Low Temp:     %d\n", two[2][3]);

  return 0;
}


/* The program creates a two dimensional integer array (y , x) of 2 rows and 3 columns.  Populate the first row with the ASCII decimal value of your name's three initials.  e.g.  JP = 74, NULL, 80.  The second row populates with decimal value of 7/22/2019 using Gregorian Calendar Date as it relates to Microsoft's computer equivalent decimal value.  e.g. hint Jan 1, 1900 = 1.  Second row next position populate in decimal the daily high temperature. Second row next position populate in decimal the daily low temperature.  Then print the array in tab column format. */
