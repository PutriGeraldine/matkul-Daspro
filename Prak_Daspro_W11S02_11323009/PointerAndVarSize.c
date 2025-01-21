#include <stdio.h>

int main (int argc, char *argv[])
{
    //deklarasikan dan inisialisasi variabel
    int var_int = 123455;
    float var_float = 780.478;
    char var_char = 65; //huruf A

    //deklarasikan dan inisialisasi pointer
    int *ptr_int = &var_int;
    float *ptr_float = &var_float;
    char *ptr_char = &var_char;

    printf("Ukuran char      = %d\n", sizeof(char));
    printf("Ukuran Float     = %d\n", sizeof(float));
    printf("Ukuran Integer   = %d\n\n", sizeof(int));

    /*printf alamat variabel, alamat menujuk kepada byte pertama*/

    printf(" Alamat var_char  ditunjukkan ptr_char     = %d\n", ptr_char);
    printf(" Alamat var_float  ditunjukkan ptr_float   = %d\n", ptr_float);
    printf(" Alamat var_int  ditunjukkan ptr_int       = %d\n", ptr_int);
}