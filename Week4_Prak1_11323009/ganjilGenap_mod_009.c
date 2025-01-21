/*
    Nama : Putri Geraldine Alexsandra Sihombing
    NIM : 11323009
    Deskripsi : menentukan bilangan ganjil genap tanpa scanf
    Tanggal : 24 September 2023
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[100]) {
    char input[100];
    int x;

    printf("Masukan sebuah bilangan bulat: ");
    gets(input);
    x = atoi(input);

    if (x % 2 == 0)
        printf("%d Merupakan Bilangan Genap\n", x);
    else
        printf("%d Merupakan Bilangan Ganjil\n", x);
return 0;
}
