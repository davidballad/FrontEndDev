#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  char a[15];
  FILE *fp;
  if (argc < 2) {
      printf("Error, 3 arguments needed!\n");
    } else {
      printf("\nProgram Name: %s ", argv[0]);
      // fp = fopen(argv[1], "r");           //Hi professor, if i dont cooment this line my string "a" wont print, im sorry I dont know why.
//       return 1;
      printf("%s",argv[2]);

      while (fgets(a, sizeof a, fp) != NULL) {
         printf("%s",a);
      }
      printf("Program Finished!\n");
      fclose(fp);
    }

  return 0;
}
