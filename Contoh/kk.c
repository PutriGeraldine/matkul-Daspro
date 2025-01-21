#include <stdio.h>
#include <string.h>

int main() {
    char nama[50];
    char nim[50];
    char password[50];

    strcpy(nama, "Rudy");
    strcpy(nim, "12345");

    printf("Masukkan Nama:");
    scanf("%s", password);
    printf("Masukkan NIM:");
    scanf("%d",nim);

   
    if (strcmp(nama,"Rudy")==0 && strcmp(nim, "12345") == 0 && strcmp(password, "Rudy") == 0 && strcmp(password, "12345") == 0) {
        printf("Password cocok. Selamat datang, Rudy!\n");
    } else {
        printf("Password salah atau data tidak cocok.\n");
    }

    return 0;
}