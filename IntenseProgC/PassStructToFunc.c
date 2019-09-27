#include <stdio.h>
#include <string.h>

struct student{
  int id;
  char name[20];
  float percent;
};

void func(struct student record);

int main(int argc, char const *argv[]) {
  struct student record;

  record.id = 1;
  strcpy(record.name, "David");
  record.percent = 99.9;

  func(record);
  return 0;
}

void func(struct student record){

  printf("ID is: %d \n", record.id);
  printf("Name is: %s\n", record.name);
  printf("Percentage is: %f\n", record.percent);
}
