#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nap[30] = "3FG2434343432";
    char z = nap[5];  // z=
    char w = z++;     // w=   , z=
    w=z--;            // w=   , z=
    w= (z+=2);        // w=   , z=
    z = (w--);        // w=   , z=
    w = z+10;         // w=   , z=
    return 0;
}
