/*
Nama : Putri Geraldine Allexsandra Sihombing
NIM : 11323009
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int elemen[5] = {2534, 4652, 8476, 2341, 4876};

    printf("Elemen\t\t Alamat\n");
    printf("========================\n");

    for (int j=0; j<5; j++)
    {
        printf("%d\t\t %d\n", elemen[j], &elemen[j]);
    }
}