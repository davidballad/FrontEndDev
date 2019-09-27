/* Program Name: HW#1
  Date Created: 7/11/2019
  Date LastEdited: 07/14/19
  Author: David Balladares */


#include <stdio.h>
#include <stdbool.h>

int main(int argc, char const *argv[]) {

  int x = 3;
  //char text[100];
  bool flag[2] = {false, true};

  printf("1=John, 2=John&Lisa, 3=Lisa, 4=1&2, 5=2&3\n");
  printf("Testing Number: %d\n", x);
  // printf("Enter A Number!\n");
  // gets(text);

  if (x == 1 || x == 4) {    /* 1=John, 2=John&Lisa, 3=Lisa, 4=1&2, 5=2&3 */
    printf("You found John\nFlag = %d", flag[true]);
  } else if (x == 3 || x == 5) {
    printf("You found Lisa\nFlag = %d", flag[true]);
  } else if (x == 2) {
    printf("You Found John AND Lisa\nFlag = %d", flag[true]);
  }
    else {
    printf("Nobody Found\nFlag = %d", flag[false]);
  }

  if (flag[true]) {
    printf("\nFlag set to true!");
  } else {
    printf("\nflag set to false!" );
  }
  return 0;
}
