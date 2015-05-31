//Upotreba strcpy i strncpy
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
char x[]="Happy Birthday to You";
char y[25];
char z[25];
//kopiramo sadrzaj od x u y
printf("%s%s\n%s%s\n",
"Niz znakova u polju x je: ", x,
"Niz znakova u polju y je: ", strcpy( y, x ));
//kopiramo prvih 14 znakov od x u z. Ne kopira se nula!
strncpy( z, x, 14 );
z[14] = '\0';
//stavimo kraj niza
printf("Niz znakova u polju z je: %s\n", z);
}
