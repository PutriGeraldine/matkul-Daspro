#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char mobil;
char rute;
char input_date[11];

int checktgl() {
    printf("Masukkan Tanggal Peminjaman Mobil (format: dd-mm-yyyy): ");
    scanf("%s", input_date);
}

int main() {
    printf("Mobil yang ada disediakan: ");
    printf("\n1.L-300");
    printf("\n2.Inova");
    printf("\n3.Mini Bus");
    printf("\n4.Bus\n");
    printf("Pilih Mobil Yang anda ingin gunakan: \n");
    scanf(" %c", &mobil);

    switch (mobil) {
        case '1':
            checktgl();
            break;
        case '2':
            checktgl();
            break;
        case '3':
            checktgl();
            break;
        case '4':
            checktgl();
            break;
        default:
            printf("Input Error!");
            exit(0);
    }
    if (mobil == '1'){
    printf("Pilih Rute Anda\n");
    printf("a.Del-Porsea PP - Rp.50.000\n");
    printf("b.Del-Balige PP - Rp.50.000\n");
    printf("c.Del-Siborong2 PP - Rp.150.000\n");
    printf("d.Del-Tarutung/Dosa PP - Rp.200.000\n");
    printf("Masukkan Rute Perjalanan Anda = ");
    scanf(" %c", &rute);
    char *filename = "Data.txt";
    int found = 0;
    FILE *fp;

    switch (rute) {
        case 'a':
            fp = fopen(filename, "a");
            if (fp == NULL) {
                printf("Error membuka file.\n");
                return 1;
            }
            fprintf(fp, "L.300|Del-Porsea PP | Rp.30.000 | %s\n", input_date);
            fclose(fp);
            printf("Pesanan berhasil dibuat\n");
            break;

        case 'b':
            fp = fopen(filename, "a");
            if (fp == NULL) {
                printf("Error membuka file.\n");
                return 1;
            }
            fprintf(fp, "L.300|Del-Balige PP | Rp.30.000 | %s\n", input_date);
            fclose(fp);
            printf("Pesanan berhasil dibuat\n");
            break;

        case 'c':
            fp = fopen(filename, "a");
            if (fp == NULL) {
                printf("Error membuka file.\n");
                return 1;
            }
            fprintf(fp, "L.300|Del-Siborong2 PP | Rp.50.000 | %s\n", input_date);
            fclose(fp);
            printf("Pesanan berhasil dibuat\n");
            break;

        case 'd':
            fp = fopen(filename, "a");
            if (fp == NULL) {
                printf("Error membuka file.\n");
                return 1;
            }
            fprintf(fp, "L.300|Del-Tartutung/Dosa | Rp.100.000 | %s\n", input_date);
            fclose(fp);
            printf("Pesanan berhasil dibuat\n");
            break;

        default:
            printf("Input Error!\n");
            exit(0);
    }
    }
        if (mobil == '2'){
    printf("Pilih Rute Anda\n");
    printf("a.Del-Porsea PP - Rp.50.000\n");
    printf("b.Del-Balige PP - Rp.50.000\n");
    printf("c.Del-Siborong2 PP - Rp.150.000\n");
    printf("d.Del-Tarutung/Dosa PP - Rp.200.000\n");
    scanf(" %c", &rute);
    char *filename = "Data.txt";
    int found = 0;
    FILE *fp;

    switch (rute) {
        case 'a':
            fp = fopen(filename, "a");
            if (fp == NULL) {
                printf("Error membuka file.\n");
                return 1;
            }
            fprintf(fp, "Innova|Del-Porsea PP | Rp.30.000 | %s\n", input_date);
            fclose(fp);
            printf("Pesanan berhasil dibuat\n");
            break;

        case 'b':
            fp = fopen(filename, "a");
            if (fp == NULL) {
                printf("Error membuka file.\n");
                return 1;
            }
            fprintf(fp, "Innova|Del-Balige PP | Rp.30.000 | %s\n", input_date);
            fclose(fp);
            printf("Pesanan berhasil dibuat\n");
            break;

        case 'c':
            fp = fopen(filename, "a");
            if (fp == NULL) {
                printf("Error membuka file.\n");
                return 1;
            }
            fprintf(fp, "Innova|Del-Siborong2 PP | Rp.50.000 | %s\n", input_date);
            fclose(fp);
            printf("Pesanan berhasil dibuat\n");
            break;

        case 'd':
            fp = fopen(filename, "a");
            if (fp == NULL) {
                printf("Error membuka file.\n");
                return 1;
            }
            fprintf(fp, "Innova|Del-Tartutung/Dosa | Rp.100.000 | %s\n", input_date);
            fclose(fp);
            printf("Pesanan berhasil dibuat\n");
            break;

        default:
            printf("Input Error!\n");
            exit(0);
    }
    }
            if (mobil == '3'){
    printf("Pilih Rute Anda\n");
    printf("a.Del-Porsea PP - Rp.50.000\n");
    printf("b.Del-Balige PP - Rp.50.000\n");
    printf("c.Del-Siborong2 PP - Rp.150.000\n");
    printf("d.Del-Tarutung/Dosa PP - Rp.200.000\n");
    scanf(" %c", &rute);
    char *filename = "Data.txt";
    int found = 0;
    FILE *fp;

    switch (rute) {
        case 'a':
            fp = fopen(filename, "a");
            if (fp == NULL) {
                printf("Error membuka file.\n");
                return 1;
            }
            fprintf(fp, "Mini Bus|Del-Porsea PP | Rp.30.000 | %s\n", input_date);
            fclose(fp);
            printf("Pesanan berhasil dibuat\n");
            break;

        case 'b':
            fp = fopen(filename, "a");
            if (fp == NULL) {
                printf("Error membuka file.\n");
                return 1;
            }
            fprintf(fp, "Mini Bus|Del-Balige PP | Rp.30.000 | %s\n", input_date);
            fclose(fp);
            printf("Pesanan berhasil dibuat\n");
            break;

        case 'c':
            fp = fopen(filename, "a");
            if (fp == NULL) {
                printf("Error membuka file.\n");
                return 1;
            }
            fprintf(fp, "Mini Bus|Del-Siborong2 PP | Rp.50.000 | %s\n", input_date);
            fclose(fp);
            printf("Pesanan berhasil dibuat\n");
            break;

        case 'd':
            fp = fopen(filename, "a");
            if (fp == NULL) {
                printf("Error membuka file.\n");
                return 1;
            }
            fprintf(fp, "Mini Bus|Del-Tartutung/Dosa | Rp.100.000 | %s\n", input_date);
            fclose(fp);
            printf("Pesanan berhasil dibuat\n");
            break;

        default:
            printf("Input Error!\n");
            exit(0);
    }
    }
            if (mobil == '4'){
    printf("Pilih Rute Anda\n");
    printf("a.Del-Porsea PP - Rp.50.000\n");
    printf("b.Del-Balige PP - Rp.50.000\n");
    printf("c.Del-Siborong2 PP - Rp.150.000\n");
    printf("d.Del-Tarutung/Dosa PP - Rp.200.000\n");
    scanf(" %c", &rute);
    char *filename = "Data.txt";
    int found = 0;
    FILE *fp;

    switch (rute) {
        case 'a':
            fp = fopen(filename, "a");
            if (fp == NULL) {
                printf("Error membuka file.\n");
                return 1;
            }
            fprintf(fp, "Bus|Del-Porsea PP | Rp.30.000 | %s\n", input_date);
            fclose(fp);
            printf("Pesanan berhasil dibuat\n");
            break;

        case 'b':
            fp = fopen(filename, "a");
            if (fp == NULL) {
                printf("Error membuka file.\n");
                return 1;
            }
            fprintf(fp, "Bus|Del-Balige PP | Rp.30.000 | %s\n", input_date);
            fclose(fp);
            printf("Pesanan berhasil dibuat\n");
            break;

        case 'c':
            fp = fopen(filename, "a");
            if (fp == NULL) {
                printf("Error membuka file.\n");
                return 1;
            }
            fprintf(fp, "Bus|Del-Siborong2 PP | Rp.50.000 | %s\n", input_date);
            fclose(fp);
            printf("Pesanan berhasil dibuat\n");
            break;

        case 'd':
            fp = fopen(filename, "a");
            if (fp == NULL) {
                printf("Error membuka file.\n");
                return 1;
            }
            fprintf(fp, "Bus|Del-Tartutung/Dosa | Rp.100.000 | %s\n", input_date);
            fclose(fp);
            printf("Pesanan berhasil dibuat\n");
            break;

        default:
            printf("Input Error!\n");
            exit(0);
    }
    }
    return 0;
}
