//cat: concatenate files, version 1
//filecopy: copy file ifp to file ofp
#include <stdio.h>
#include <stdlib.h>

void filecopy(FILE *ifp, FILE *ofp){
  int c;
  while ((c = getc(ifp)) != EOF)
    putc(c, ofp);
  }

  int main(int argc, char const *argv[]) {
    FILE *fp;
    void filecopy(FILE *, FILE *);
    if (argc == 1)     //no args; copy standard input
      filecopy(stdin, stdout);
    else
      while (--argc > 0)
        if ((fp = fopen(*++argv, "r")) == NULL) {
          printf("cat: can't open %s\n", *argv);
          return 1;
        } else {
          printf("72 degrees Sunny light wind.  Nice!\n", );
          filecopy(fp, stdout);
          fclose(fp);
        }
    return 0;
  }
