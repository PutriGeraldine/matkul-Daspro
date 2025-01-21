#include <stdio.h>

int main() {

    printf("Nama saya adalah Putri Geraldine Alexsandra Sihombing\n");
    printf("NIM saya adalah 11323009\n");
    printf("Prodi saya adalah Diploma 3 Teknologi Informasi\n");
    printf("ini adalah program deret\n\n");

    int n, i;
    int ganjil = 1;
    printf("Masukkan jumlah angka yang ingin ditampilkan: ");
    scanf("%d", &n);

    int decrement = n; 

    for (i = 1; i <= 2 * n; i++) { 
        if (i % 2 == 0) {
            printf("%d ", decrement);
            decrement--;
        } else {
            printf("%d ", ganjil);
            ganjil++;
        }
    }

    printf("\n");

    return 0;
}

