#include <stdio.h>

//Pogram C untuk mendemonstrasikan pointer ke pointer
int main()
{
    int var = 789;

    // pointer untuk var 
    int *ptr2;

    // double pointer untuk ptr 2
    int **ptr1;

    // menyimpan alamat var pada ptr2
    ptr2 = &var;

    // menyimpan alamat ptr2 pada ptr1
    ptr1 = &ptr2;

    // menampilkan nilai var menggunakan pointer tunggal dan ganda 
    printf("Value of var = %d\n", var);
    printf("Value of var using single pointer = %d\n", *ptr2);
    printf("Value of var using double pointer = %d\n", **ptr1);

    return 0;
}