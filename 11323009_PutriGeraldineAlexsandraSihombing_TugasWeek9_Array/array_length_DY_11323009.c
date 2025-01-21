// Nama : Putri Geraldine Alexsandra Sihombing
// NIM : 11323009
// deskripsi : array dengan alokasi dinamis

#include <stdio.h>
#include <stdlib.h>
int main(){
int length;
int a[5];

printf("Size of array (byte) = %d\n", sizeof(a));
printf("Size of integer (byte) = %d\n", sizeof(int));

length = sizeof(a) / sizeof(int);
printf("Array length = %d\n", length);

system("PAUSE");
return 0;
}
