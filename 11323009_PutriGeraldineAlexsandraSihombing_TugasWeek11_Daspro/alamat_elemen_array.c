/*
Nama : Putri Geraldine Allexsandra Sihombing
NIM : 11323009
*/

#include <stdio.h>

int int_array[10], i;
float float_array[10];
double double_array[10];
   int main ()
 {
    printf("\t\tInteger\t\tFloat\t\tDouble");
    printf("\n===================================");
    printf("==============================");

    for (i=0; i<10; i++)
        printf("\n Element %d : \t%ld\t\t%ld\t\t%ld", i, &int_array[i], &float_array[i], &double_array[i]);
    printf("\n======================================");
    printf("=============================\n");
    return 0;
 }