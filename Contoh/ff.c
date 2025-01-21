#include <stdio.h>

int main() {
    int n; // Ukuran kotak diagonal
    printf("Masukkan ukuran kotak diagonal: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == j || i == (n - j+1)) {
                printf("* ");
            } else {
                printf("  "); // Spasi untuk elemen di luar diagonal
            }
        }
        printf("\n");
    }

    return 0;
}
//Kode di atas akan membuat kotak diagonal dengan ukuran yang dimasukkan oleh pengguna dan mengisi elemen-elemen diagonal dengan karakter '*' dan elemen-elemen lainnya dengan spasi. Anda dapat menyesuaikan ukuran kotak diagonal sesuai kebutuhan.





