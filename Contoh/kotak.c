#include <stdio.h>

int main() {
    int i, j, n;

    printf("Masukkan panjang sisi kotak: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            // Cetak karakter '*' jika berada pada diagonal, jika tidak, cetak spasi
            if (i == j || i == (n - j + 1)) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}