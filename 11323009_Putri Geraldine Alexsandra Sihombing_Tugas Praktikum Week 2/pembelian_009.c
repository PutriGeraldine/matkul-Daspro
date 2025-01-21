#include <stdio.h>
void main ()
{
    int sabun, shampo, sabunwajah, uang, jumlah, sisa;
    sabun = 8000;
    shampo = 35000;
    sabunwajah =39000;
    sabun=sabun*2;
    shampo=shampo*2;
    sabunwajah=sabunwajah*2;
    uang=31000;
    printf("Harga sabun adalah Rp.%d\n", sabun);
    printf("Harga shampo adalah Rp.%d\n", shampo);
    printf("Harga sabunwajah adalah Rp.%d\n", sabunwajah);
    jumlah= sabun+shampo+sabunwajah;
    printf("Total harga perlengkapan mandi adalah Rp.%d\n", jumlah);
    sisa= uang-jumlah;
    printf("sisa uang yang dimiliki pak Darwin adalah Rp.%d\n", sisa) ;
}
