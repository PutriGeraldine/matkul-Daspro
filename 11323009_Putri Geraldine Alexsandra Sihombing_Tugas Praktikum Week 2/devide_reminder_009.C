#include <stdio.h>

int main ()
{
    int A;
    int B;
    printf("Input Angka Pertama: ");
    scanf( "%d", &A);
    printf("Input Angka Kedua: ");
    scanf("%d", &B);
    printf ("Angka yang anda inout adalah: %d dan %d\n", A, B);
    printf("%d / %d = %d\n",A, B, A/B);
    printf("Sisa - %d",A%B);
}
