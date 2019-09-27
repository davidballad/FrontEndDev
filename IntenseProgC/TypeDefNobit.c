#include <stdio.h>

void main() {
  typedef struct Student_NoBit{
    int StudentID;
    int Age;
  }STD_NOBIT;

  typedef struct Student{
    int StudentID : 8;
    unsigned int Age : 5;
  }STD;

  STD_NOBIT std_nb;
  STD std;


  printf("\nSize of student structure without bitfield: %d\n", sizeof(std_nb));
  printf("\nStudentID without bitfield: %d\n", sizeof(std_nb.StudentID));
  printf("\nStudent Age without bitfield: %d\n", sizeof(std_nb.Age));
  printf("\nStudent structure with bitfield: %d\n", sizeof(std));

  std.Age = 15;
  printf("Age of student with bitfield: %d\n", std.Age);



  return 0;
}
