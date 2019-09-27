#include <stdio.h>
#include <string.h>
#include "HFile2.h"
extern double price_productA;
extern double price_productB;

//char priority[15] = "urgent";

int main(){

  //char priority[15] = "low";
  //printf("Print in Main --> %s\n", priority);

  double total1, total2;
  double grand_total1, grand_total2;


  grand_total1 = price_productB;
  total1 = totalh(price_productA);
  grand_total1 = grand_total1 + total1;

  grand_total2 = price_productA;
  total2 = totalh2(price_productB);
  grand_total2 = grand_total2 + total2;


  printf("Item A:\n");
  printf("Item cost :      %.2f\n", price_productA);
  printf("Item sales tax : %.2f\n", totalh);
  printf("Item Total :     %.2f\n", total1);
  printf("Grand Total :    %.2f\n", grand_total1);
  printf("-----------------------\n");
  printf("Item B: \n");
  printf("Item cost :      %.2f\n", price_productB);
  printf("Item sales tax : %.2f\n", totalh2);
  printf("Item Total :     %.2f\n", total2);
  printf("Grand Total :    %.2f\n", grand_total2);


  return 0;
}
