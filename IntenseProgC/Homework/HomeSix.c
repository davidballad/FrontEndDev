/* CS288 H3 Session-2 HW#11; Command Line; David Balladares; Date 8/1/2019 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  char a[15];
  printf("\n Name of my program %s \t", argv[0]);

      printf("%s",argv[1]);

      while (a != NULL) {
         printf("%s",a);
      }
      printf("Program Finished!\n");

  return 0;
}

/* Assignment: Write a very simple program, Command Line Arguments.  The program should first read the input arguments (both exe name and char string); secondly print on new line the program name then print on new line the char string then print on newline "Program finished!".  Run the exe in the system screen (Microsoft Command Prompt, or, Linux Terminal) the line should read for example "c:\HW11your_program_name.exe hellogoodpeople"     Take a snapshot screen print of the outcome.  Upload the .c and the screen print.*/
