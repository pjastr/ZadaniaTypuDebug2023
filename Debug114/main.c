#include <stdio.h>
#include <stdlib.h>

int main()
{
  char napis[20]="123456789123456789";
  char z = *(napis+4); //z=
  int a = napis[7]; // a=   ,z=
  z++; // a=   ,z=
  int b= a++; // a=   , b=  ,z=
  z=(a-=2)+3; // a=   , b=  ,z=
  a=b^2; // a=   , b=  ,z=
  b=a*b; // a=   , b=  ,z=
  return 0;
}

