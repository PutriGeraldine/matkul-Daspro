/*
Nama         : Putri Geraldine Alexsandra Sihombing
NIM         : 11323009
Nama File   :Urutan 3 Bilangan
*/
#include<stdio.h>
int main(){
    int bintang, n, j, i, baris;

    printf("Nama Saya Putri Geraldine Alexsandra Sihombing");
    printf("\n");
    printf("NIM saya adalah 11323009");
    printf("\n");
    printf("Prodi saya D3 Teknologi Informasi");
    printf("\n");
    printf("Ini adalah Program No 1");
    printf("\n");

    printf(" masukkan jumlah bintang: ");
    scanf("%d", &bintang);
    printf(" masukkan jumlah baris: ");
    scanf("%d", &baris);
    for(i=1; i<=5; i++){
        for(j=1; j<=5; j++){
            printf(" *");
        }
        printf("\n");
    }
    return 0;
}
