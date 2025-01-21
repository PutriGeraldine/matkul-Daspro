#include <stdio.h>
#include <string.h>

int main() {

    printf("Nama saya adalah Putri Geraldine Alexsandra Sihombing\n");
    printf("NIM saya adalah 11323009\n");
    printf("Prodi saya adalah Diploma 3 Teknologi Informasi\n");
    printf("ini adalah program cek password\n\n");

    char nama[50];
    char nim[50];
    char password[50];

    strcpy(nama, "Rudy");
    strcpy(nim, "12345");

    printf("Masukkan Nama: ");
    scanf("%s", password);
    printf("Masukkan NIM: ");
    scanf("%d", nim);

    
    if (strcmp(nim, "12345") == 0 && strcmp(password, "Rudy") == 0) {
        printf("Selamat, anda bisa login!\n");
    } else {
        printf("Maaf, anda tidak login!\n");
    }

    return 0;
}
