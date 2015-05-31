// Histogram za jednodimenzionalno polje
#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
int main()
{
// inicializacija jednodimenzionalnog polja dužine 10
int polje[ SIZE ]= { 9, 5, 3, 12, 1, 2, 14, 18, 4, 17 };
int i;
// brojac vanjski
int j;
// brojac unutrasnji
printf("%s%13s%17s\n", "Element", "Vrijednost", "Histogram");
for(i=0; i < SIZE; i++)
{
printf("%7d%13d", i, polje [ i ]);
for ( j = 1; j <= polje [ i ]; j++)
{
printf("%c",'*');
}
printf("\n");
}
}
