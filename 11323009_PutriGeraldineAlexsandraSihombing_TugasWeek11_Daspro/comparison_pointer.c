/*
Nama : Putri Geraldine Allexsandra Sihombing
NIM : 11323009
*/
#include <stdio.h>
#define MAX 10 

int i_array[MAX] = {0,1,2,3,4,5,6,7,8,9};
int *i_ptr, count;
float f_array[MAX] = {.0, .1, .2, .3, .4, .5, .6, .7, .8, .9};
float *f_ptr;

int main (void)
{
    i_ptr = i_array;
    f_ptr = f_array;

    while(i_ptr <= &i_array[MAX-1]){
        printf("%d\t%f\n", *i_ptr++, *f_ptr++);
    }

    return 0;
}