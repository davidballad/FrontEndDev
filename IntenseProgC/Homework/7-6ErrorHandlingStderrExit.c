#include <stdio.h>
#include <stdlib.h> /*needed for stderr and exit */
/* cat: concatenate files, version 2 */

/* filecopy: copy file ifp to file ofp */
void filecopy(FILE *ifp, FILE *ofp) /* pointer to input file, output file */
{
   int c;
   while ((c = getc(ifp)) != EOF)
      putc(c, ofp);
}

int main(int argc, char *argv[])
{
   FILE *fp, *fp2;
   void filecopy(FILE *, FILE *);
   char *prog = argv[0];  /* this program exe name as source of an error */

   if (argc == 1){ /* no args; copy standard input */

     fp = fopen("7NoInputFileResponse.txt", "r");       //
     fp2 = fopen("7Error_Log_File.txt", "a");           //
                                                        //
     if (fp == NULL) {                                   //
        fprintf(stderr, "%s: 99 error unknown  %s\n");    //NEW
     } else {                                             //CODE
       while(fgets(prog, sizeof(prog), fp)) {             //
        fprintf(fp2, "%s", prog);                         //
      }                                                   //
    }                                                    //
      fclose(fp);                                           //
      fclose(fp2);                                          //
   }


   else
      while (--argc > 0)
         if (( fp = fopen(*++argv, "r")) == NULL) { /* pointer to next command line file */
            fprintf(stderr, "%s: 99 error unknown  %s\n", prog, *argv);
            exit(1);  /* determined by programmer return value for error type #1 */
         } else {
            filecopy(fp, stdout);
            fclose (fp);
         }

   if(ferror(stdout)) {
      fprintf(stderr, "%s: error writing stdout\n", prog);
      exit(2);  /* determined by programmer return value for error type #2 */
   }

   exit(0);  /* determined by programmer return value for error type #0, success */
}
