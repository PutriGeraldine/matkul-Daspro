#include<stdio.h>

int jumlah(int n){
    if(n<=5)
        return n+jumlah(n+1);
    else
        return 0;
}
int main(){
    int angka = 1;
    printf("penjumlahan dari %d = %d\n", angka, jumlah(angka));
    return 0 ;
}