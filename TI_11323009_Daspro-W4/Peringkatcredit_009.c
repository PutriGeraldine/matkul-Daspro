/*
    Nama : Putri Geraldine Alexsandra Sihombing
    NIM : 11323009
    Deskripsi : Keputusan untuk menentukan peringkat
    Tanggal : 24 September 2023
*/
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main() {
    float pokok_utang;
    int masa_tunggak;
    char peringkat_kredit;
    bool statusApl = false;

    char input[100];

    printf("Masukkan pokok utang: ");
    gets(input);
    pokok_utang = atof(input);

    printf("Masukkan masa tunggak: ");
    gets(input);
    masa_tunggak = atoi(input);

    printf("Masukkan peringkat kredit: ");
    gets(input);
    peringkat_kredit = input[0];

    printf("Pokok Utang Anda: %.2f\n", pokok_utang);

    if (pokok_utang <= 100000000) {
        printf("Masa Tunggak Anda: %d\n", masa_tunggak);
    }

    if (masa_tunggak <= 6) {
        printf("Peringkat utang Anda: Jadwalkan\n\n");
    } else {
        printf("Peringkat utang Anda: Gagal\n\n");
    }

    if (pokok_utang > 100000000) {
        printf("Masa Tunggak Anda: %d\n", masa_tunggak);
    }

    if (masa_tunggak <= 12) {
        printf("Peringkat utang Anda: Jadwalkan\n\n");
    } else {
        printf("Peringkat utang Anda: Gagal\n\n");
    }

    return 0;
}
