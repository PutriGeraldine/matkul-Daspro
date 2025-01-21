/*
Nama : Putri Geraldine Alexsandra Sihombing
NIM : 11323009
Deskripsi : menggunakan strukur nested if else
Tanggal : 25 September 2023 
*/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main (int argc, char *argv[])
{
    int umur;
    float gaji;
    bool statusApl = false;
    umur = atoi(argv[1]);
    gaji= atoi(argv[2]);

    printf("umur anda:%d\n", umur);
    printf("gaji anda : %.2f\n", gaji);
   
    if(umur>60){
        statusApl= false;
        printf("Aplikasi anda ditolak!\n");
    }
    else if (gaji<300000){
        statusApl= false;
        printf("Aplikasi anda ditolak!\n");
    }
    else
    {
        statusApl = true;
        printf("aplikasi anda diterima!\n");
    }

}