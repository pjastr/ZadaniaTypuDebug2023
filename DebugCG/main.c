#include <stdio.h>
#include <stdlib.h>

int main()
{
    char napis[20]="InformatykaOlsztyn";
    char z = *(napis+1)+2; //z=
    int a = napis[3]; // a=   ,z=
    z++; // a=   ,z=
    int b= a+4; // a=   , b=  ,z=
    z=(a-=3)+2; // a=   , b=  ,z=
    a=a*2; // a=   , b=  ,z=
    b=a+b; // a=   , b=  ,z=
    return 0;
}

