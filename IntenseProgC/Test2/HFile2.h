const double SALESTAX = 0.25;
double price_productA = 12.50;
double price_productB = 16.50;


double totalh(double price_productA)
{
return price_productA + (price_productA * SALESTAX);
}

double totalh2(double price_productB)
{
return price_productB + (price_productB * SALESTAX);
}
