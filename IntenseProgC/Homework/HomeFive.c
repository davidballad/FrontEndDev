/* CS288 H3 Session-2 HW#10; Character Pointers and Functions; David Balladares; Date 8/1/2019 */

#include <stdio.h>

int string_length(char*);
void reverse(char*);

int main() {
        char s[20];
        printf("Enter a string\n");
        gets(s);
        reverse(s);
        printf("Reverse of the string is \"%s\".\n", s);
        printf("Count of the characters %d\n", *string_length);

        return 0;
}

void reverse(char *s) {
        int length, c;
        char *begin, *end, temp;

        length = string_length(s);
        begin  = s;
        end    = s;

        for (c = 0; c < length - 1; c++)
                end++;

        for (c = 0; c < length/2; c++) {
                temp   = *end;
                *end   = *begin;
                *begin = temp;
                begin++;
                end--;
        }
}

int string_length(char *pointer) {
        int c = 0;

        while( *(pointer + c) != '\0' )
                c++;

        return c;
}



// Write a program Character Pointers and Functions.  (like program #5-5).  Keyboard input to enter one character string.  Using a single dimension array, populate the array with the character string, call a function using pointers to reverse order the character string, pass back to the main the output and total_count_of_characters.  (maybe use a global variable for the total count).  Print display the reversed char string and total_count.
// <END>
