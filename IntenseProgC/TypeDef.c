#include <stdio.h>
#include <string.h>

typedef struct Books{
  char title[50];
  char author[50];
  char subject[100];
  int bookID;

} Book;

int main(int argc, char const *argv[]) {
  Book book;

  strcpy(book.title, "JavaScript");
  strcpy(book.author, "David B");
  strcpy(book.subject, "Programming");
  book.bookID = 268975;

  printf("Book title: %s\n", book.title);
  printf("Book title: %s\n", book.title);
  printf("Book title: %s\n", book.title);
  printf("Book title: %s\n", book.title);

  return 0;
}
