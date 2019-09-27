#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[]) {

FILE *pFile;
FILE *pFile2;
char buffer[256];

pFile=fopen("7NoInputFileResponse.txt", "r");
pFile2=fopen("7Error_Log_File.txt", "a");
if(pFile==NULL) {
    perror("Error opening file.");
}
else {
    while(fgets(buffer, sizeof(buffer), pFile)) {
        fprintf(pFile2, "%s", buffer);
    }
}
fclose(pFile);
fclose(pFile2);

}
