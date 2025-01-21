/*
Nama         : Putri Geraldine Alexsandra Sihombing
NIM         : 11323009
Nama File   :Urutan 3 Bilangan
*/

#include<stdio.h>
#include<conio.h>


int main (){
    int angka[100];
    int n, i, j;
    printf("Nama Saya Putri Geraldine Alexsandra Sihombing");
    printf("\n");
    printf("NIM saya adalah 11323009");
    printf("\n");
    printf("Prodi saya D3 Teknologi Informasi");
    printf("\n");
    printf("Ini adalah Program No 1");
    printf("\n");

    printf("Masukkan Banyak Data: ");
    scanf("%d", &n);
    printf("data: ");
    
    for(i=0; i<n; i++){
        scanf("%d", &angka[i]);
    }
    for (int i=0; i<n; i++)
    {
    for(int j=0; j<n; j++);
    {
        if(angka[j] < angka[i]){
            int tmp = angka[i];
            angka[i] = angka[j];
            angka[j] = tmp;
        }
    }
     printf("\n\nAscending : ");
    }
    
    
    return 0;
    getch();
}