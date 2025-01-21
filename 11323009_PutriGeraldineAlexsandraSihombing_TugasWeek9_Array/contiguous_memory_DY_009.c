/*Nama : Putri Geraldine Alexsandra Sihombing
NIM : 11323009
Deskripsi : array yang disimpan dalam memori
Tanggal : 1 November 2023*/
// file name :  contiguous_memory_DY_NIM.c
/*program yang menunjukkan bagaimana elemen suatu array disimpan pada memori yanag berdekatan*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int arr[5], i;
    printf("Size of integer in this compiler is %u", sizeof(int));

    for(i=0; i<5; i++)
    printf("Address arr[%d] is %u\n", i, &arr[1]);

    system("PAUSE");
    return 0;
    }