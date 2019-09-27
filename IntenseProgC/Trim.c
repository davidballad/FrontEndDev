#include <stdio.h>
#include <string.h>
int main(){
  int trim(char s[20])
  {
    s = "Hello";
    int n;

    for (n = strlen(s)-1; n >= 0; n--) {
      if (s[n] != ' ' && s[n] != '\t' && s[n] != '\n') {
        break;
      } else {
        s[n+1] = '\0';
        return n;
      }
    }
  }
}
