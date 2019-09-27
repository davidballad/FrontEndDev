#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void filecopy(FILE *ifp, FILE *ofp)
{
  int c;
  while ((c = getc(ifp)) != EOF)
  putc(c, ofp);
}

  int main(int argc, char *argv[]){
  FILE *fp;
  void filecopy(FILE *, FILE *);
  char *prog = argv[0];
  char *outFile = NULL;
  FILE *outPtr = NULL;

  time_t curTime;
  char* timeString = NULL;

  if(argc == 1){
    char ch;
    char file_name[] = "7NoInputFileResponse.txt";
    FILE *f;

    f = fopen(file_name, "r");
    if(f==NULL) {
      fprintf(stderr,"99 error unknown \n");
      exit(EXIT_FAILURE);
    }else{

      char err[500];
      int counter = 0;
      while((ch = fgetc(f)) != EOF) {
        printf("%c",ch);
        err[counter]=ch;
        counter++;
      }
      err[counter] = '\0';

      char filePath[] = "7Error_Log_File.txt";
      FILE *fPtr;

      fPtr = fopen(filePath,"a");
      if(fPtr == NULL) {

        fprintf(stderr, "99 error unknown \n");
        fclose(f);
        exit(EXIT_FAILURE);
      }
      else {
        if ((curTime = time(NULL)) == ((time_t)-1)){
          fprintf(stderr, "Unable to obtain the current time.\n");
          exit(EXIT_FAILURE);
        }

        if((timeString = ctime(&curTime)) == NULL){
          fprintf(stderr, "Unable to fetch the current time.\n");
          exit(EXIT_FAILURE);
        }
        fputs("\r\n",fPtr);
        fputs(timeString, fPtr);
        fputs(err,fPtr);
        fputs("COMPLETED\n", fPtr);

        fclose(fPtr);
      }
    }
  }
      else{
        while (--argc > 0){
          if (( fp = fopen(*++argv, "r")) == NULL) {
            fprintf(stderr, "%s: can not open %s\n", prog, *argv);
            exit(1);
          } else {
              filecopy(fp, stdout);
              fclose (fp);
            }
        }
  }
    if(ferror(stdout)) {
      fprintf(stderr, "%s: error writing stdout\n", prog);
      exit(2);
    }

    if(outPtr){
      fprintf(outPtr, "COMPLETED\n");
      fclose(outPtr);
    }
      exit(0);
  }
