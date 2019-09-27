#include <stdio.h>

int main() {
  char c1[] = "Z";
  int c2 = '0';
  int xFactor = 10;
  int answer = 0;


  printf("Enter character 1 for cs.\n");
  c2 = getchar();
  if (c2 == '1') {
    printf("\nc2 does not equal \'1\'\n");      //for char '1' testing only
  }
  while ((c2 == getchar()) !='\n' && c2 != EOF);    //clears the buffer
    printf("Enter the integer value for cs.\n");
    c2 = getchar() - 48;
    while (c2 != -38) {
      answer = (answer*xFactor) + c2;
      c2 = getchar() - 48;        //minus 48 becaouse 48  is character 0
    }
    printf("cs= %d\n", answer);

  return 0;
}
