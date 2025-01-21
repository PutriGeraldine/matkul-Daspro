/*
Nama : Putri Geraldine Alexsandra Sihombing
NIM : 11323009
Deskripsi : Program menggunakan command prompt
Tanggal : 25 September 2023 
*/

#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]){
    int x, y, z;
    x = atoi (argv[1]);
    y = atoi (argv[2]);
    z = atoi (argv[3]);

    printf("nilai x + %d\t Nilai y = %d\t Nilai z = %d\n\n", x, y, z);
   
    x = (y>2) && (z<0);
    printf("nilai x setelah operasi x=(y>2) && (z<0): %d\n", x);
   
    x = (y>2) || (z<0);
    printf("nilai x setelah operasi x=(y>2) || (z<0): %d\n", x);
    
    x = !(y<0);
    printf("nilai x setelah operasi x=!(y<0): %d\n", x);
}