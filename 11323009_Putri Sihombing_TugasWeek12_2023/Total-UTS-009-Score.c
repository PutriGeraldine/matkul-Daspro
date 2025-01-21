#include <stdio.h>

int main() {
    FILE *f;
    char *filename ="writeme_2.txt";
    char nim[4], nama[50], matkul[50];
    float nilaiUTS, totalNilai = 0;
    int k;

    f = fopen(filename, "w");
    if (f == NULL) {
        perror("Error opening file");
        return 1;
    }
    for (k = 1; k <= 8; k++) {
        printf(" Data Nilai %d\n", k);

        printf("Masukkan NIM: ");
        scanf("%s", nim);

        printf("Masukkan Nama: ");
        scanf("%s", nama);

        printf("Masukkan MataKuliah: ");
        scanf("%s", matkul);

        printf("Masukkan Nilai UTS: ");
        scanf("%f", &nilaiUTS);

        fprintf(f, "%s|%s|%s|%.2f\n", nim, nama, matkul, nilaiUTS);

        totalNilai += nilaiUTS;
    }
    fclose(f);
    return 0;
}
