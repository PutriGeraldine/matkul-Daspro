#include <stdio.h>

//Deklarasikan dan sekaligus inisialisasi variabel tipe integer
int a_var = 10;

//deklarasikan variabel pointer ke variabel tipe integer
int *a_ptr;

int main()
{
    //inisialisasi nilai pointer menunjuk ke alamt a_var
    a_ptr = &a_var; //simbol "&" dibaca address of (alamat dari)

    //akses dan tampilkan alamat memori yang ditunjukkan pointer
    printf("\n Alamat memori yang ditunjuk *a_ptr   = %d", a_ptr);
    printf("\n Alamat memori variabel &a_var        = %d\n", &a_var);

    //akses dan tampilkan nilai variabel: a_var 
    printf("\n Akses langsung (a_var)       : a_var = %d", a_var);
    printf("\n Akses tak langsung (*a_ptr)  : a_var = %d\n", *a_ptr);
}