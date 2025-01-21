/*
Nama : Putri Geraldine Allexsandra Sihombing
NIM : 11323009
*/

#include <stdio.h>

int my_array[0] ;
int *ptr;
int main(void)
{
    int i;
    ptr=&my_array[0];
    printf(" \n\n");

    for(int i=0; i<=5; i++){
        printf("myArray[%d]= %d\n\n", i, &my_array[i]);
    }
    return 0;
}
