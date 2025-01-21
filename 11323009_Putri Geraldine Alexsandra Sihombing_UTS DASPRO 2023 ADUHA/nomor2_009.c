#include <stdio.h>

int main() {
    int n;
        printf("Nama saya adalah Putri Geraldine Alexsandra Sihombing\n");
        printf("NIM saya adalah 11323009\n");
        printf("Prodi saya adalah Diploma 3 Teknologi Informasi\n");
        printf("ini adalah program baris diagonal didalam kotak\n\n");

    printf("Masukkan jumlah baris: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (j == 1||i ==1||j == (n-i + 1)||i==n||j==i||j==n) { //cukup ubah if nya saja
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
