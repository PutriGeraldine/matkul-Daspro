#include <stdio.h>

int main() {
    int n, i;
    int ganjil = 1;

    printf("Masukkan jumlah angka yang ingin ditampilkan: ");
    scanf("%d", &n);

    int decrement = n; // Initialize decrement value

    for (i = 1; i <= 2 * n; i++) { // We double the input value for the number of iterations
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