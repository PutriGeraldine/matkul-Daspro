#include <stdio.h>

int main() {
    int n;

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