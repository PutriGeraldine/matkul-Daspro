/*
Nama : Putri Geraldine Allexsandra Sihombing
NIM : 11323009
*/

#include <stdio.h>

int my_array[] = {1,23,17,4, -5, 100};
int *ptr;
int main(void)
{
    int i;
    ptr = &my_array[0];
    printf("\n\n");
    for (i=0; i<6; i++)
    {
        printf("my array[%d] = %d \n", i, my_array[i]);
        printf("ptr + %d = %d\n",i, *(ptr + 1)); 

    }
    return 0;
}