#include <stdio.h>
int sp = 5;  /*has to be here*/

int getAnswer(int num1){
   int sp = 10;
   printf("from_getAnswer num1= %d\n", num1);
   return sp + 4;
}

int main(){
   int y = 2;
   printf("from_main sp= %d\n", sp);
   int x = getAnswer(y);
   printf("from_main x= %d\n", x);
   printf("from_main sp= %d\n", sp);

   return 0;
}
/*int sp = 5;*/
