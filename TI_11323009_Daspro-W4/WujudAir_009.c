/*
    Nama : Putri Geraldine Alexsandra Sihombing
    NIM : 11323009
    Deskripsi : menerima input berupa sebuah bilangan real yang menyatakan suhu air dalam derajat  celsius
    Tanggal : 24 September 2023
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    char input[100];
    int x;

    if (argc < 2) {
        printf("Masukkan suhu air : ");
        fgets(input, sizeof(input), stdin);
        x = atoi(input);
    } else {
        x = atoi(argv[1]);
    }

    printf("Suhu Zat: %d\n", x);

    if (x < 0) {
        printf("Wujud air adalah padat");
    } else if (x < 100) {
        printf("Wujud air adalah cair");
    } else {
        printf("Wujud air adalah gas");
    }

    return 0;
}
