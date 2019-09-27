#include <stdio.h>


struct StudentData{     //Create a cstructure here. NAme of structure is StudentData.
  char *stu_name;
  int stu_id;
  int stu_age;
};

int main(int argc, char const *argv[]) {
  struct StudentData student;   //student is the variable of structure StudentData.

  student.stu_name = "David";     //assigning values to each structure member
  student.stu_id = 1234;
  student.stu_age = 26;

  printf("Student name is: %s\n", student.stu_name);      //displaying the values of structure member
  printf("Studnt ID is: %d\n", student.stu_id);
  printf("Student age is: %d\n", student.stu_age);
  return 0;
}
