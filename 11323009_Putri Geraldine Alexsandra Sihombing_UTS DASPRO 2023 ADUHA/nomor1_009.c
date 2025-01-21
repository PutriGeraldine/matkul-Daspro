#include <stdio.h>



int main() {
    printf("Nama saya adalah Putri Geraldine Alexsandra Sihombing\n");
    printf("NIM saya adalah 11323009\n");
    printf("Prodi saya adalah Diploma 3 Teknologi Informasi\n");
    printf("ini adalah program membaca nama dan menampilkan Hallo diikuti dengan nama yang diketikkan\n\n");  

    char nama[50];

    printf("Masukkan Nama: ");
    scanf("%s", nama);

    printf("Hallo %s\n", nama);

    return 0;
}
