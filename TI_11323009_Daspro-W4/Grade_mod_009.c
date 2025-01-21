/*
    Nama : Putri Geraldine Alexsandra Sihombing
    NIM : 11323009
    Deskripsi : menggunakan command prompt dan menerima argument untuk menerima masukkan dari user tanpa scanf
    Tanggal : 24 September 2023
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    char input[100];
    float x;

    printf("Masukkan nilai mata kuliah Anda: ");
    fgets(input, sizeof(input), stdin);
    x = atof(input);

    char ch[2];

    printf("Nilai Mata Kuliah Anda: %.0f\n", x);

    if (x >= 80) {
        strcpy(ch, "A");
    } else if (x >= 65) {
        strcpy(ch, "B");
    } else if (x >= 50) {
        strcpy(ch, "C");
    } else if (x >= 35) {
        strcpy(ch, "D");
    } else {
        strcpy(ch, "E");
    }

    printf("Anda Mendapatkan Grade %s\n", ch);

    return 0;
}
