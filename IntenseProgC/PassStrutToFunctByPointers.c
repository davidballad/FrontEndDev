#include <stdio.h>
#include <string.h>

struct student{

  int id;
  char name[20];
  float percent;
};

void func(struct student *record);        //passing the struct as a pointer

int main(int argc, char const *argv[]) {

  struct student record;

  record.id = 2;
  strcpy(record.name, "David");
  record.percent = 89;

  func(&record);      //passing the pointer
  return 0;
}

void func(struct student *record){        //receiving the pointer

  printf("ID is: %d\n", record->id);
  printf("Name is: %s\n", record->name);
  printf("Percentage is: %f\n", record->percent);
}
