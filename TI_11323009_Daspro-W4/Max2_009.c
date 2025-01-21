/*
    Nama : Putri Geraldine Alexsandra Sihombing
    NIM : 11323009
    Deskripsi : menerima input dua buah bilangan bulat. Metode yang digunakan untuk menerima input harus sama dengan program lainnya
    Tanggal : 24 September 2023
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    char input[100];
    int a, b;

    if (argc < 3) {
        printf("Masukkan nilai pertama: ");
        fgets(input, sizeof(input), stdin);
        a = atoi(input);
        
        printf("Masukkan nilai kedua: ");
        fgets(input, sizeof(input), stdin);
        b = atoi(input);
    } else {
        a = atoi(argv[1]);
        b = atoi(argv[2]);
    }

    printf("Nilai Yang Anda Masukkan %d\n", a);
    printf("Nilai Yang Anda Masukkan %d\n", b);

    if (a > b) {
        printf("Nilai Yang Terbesar Adalah = %d\n", a);
    } else if (a < b) {
        printf("Nilai Yang Terbesar Adalah = %d\n", b);
    } else {
        printf("Nilai a dan b sama besar.\n");
    }

    return 0;
}
