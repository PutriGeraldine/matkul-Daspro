/*
    Nama : Putri Geraldine Alexsandra Sihombing
    NIM : 11323009
    Deskripsi : Metode yang digunakan untuk menerima input harus sama dengan program lainnya. (menggunakan argument pada command prompt)
    Tanggal : 24 September 2023
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int x, y, z;

    printf("Masukkan nilai pertama: ");
    char input[100];
    gets(input);
    x = atoi(input);

    printf("Masukkan nilai kedua: ");
    gets(input);
    y = atoi(input);

    printf("Masukkan nilai ketiga: ");
    gets(input);
    z = atoi(input);

    printf("Nilai pertama: %d\n", x);
    printf("Nilai kedua: %d\n", y);
    printf("Nilai ketiga: %d\n", z);

    if (x > y && x > z) {
        printf("%d adalah nilai terbesar\n", x);
    } else if (y > x && y > z) {
        printf("%d adalah nilai terbesar\n", y);
    } else if (z > x && z > y) {
        printf("%d adalah nilai terbesar\n", z);
    } else {
        printf("Ada nilai yang sama besar\n");
    }

    return 0;
}
