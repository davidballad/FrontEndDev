#include <stdio.h>

const int PI = 3.14159265;

double getArea(double radius);

int main() {
  double radius1 = 1.1, area1, area2;

  area1 = getArea(radius1);
  printf("area 1 is %.2lf\n", area1);

  area2 = getArea(2.2);
  printf("area 2 is %.2lf\n", area2);
  printf("area 3 is %.2lf\n", getArea(3.3));
}

double getArea(double radius){
  return radius * radius * PI;
}
