//Nama : Putri Geraldine Alexsandra Sihombing
//Prodi : DIII Teknologi Informasi
//NIM : 11323009

#include <stdio.h>
int main ()
{
        int A;
        int B;
        int hasil_pembagian;
        int sisa;

//output
    printf("masuk jumlah bilangan A:");
    scanf("%d",&A);
    printf("masukkan jumlah bilangan B:");
    scanf("%d",&B);

//hasil dari sisa
    hasil_pembagian = A / B;
    printf("hasil: %d\n", hasil_pembagian);
    sisa = A % B;
    printf("sisa:%d",sisa);

    return 0;

}    