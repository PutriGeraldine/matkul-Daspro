// Header file
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    printf("Nama Putri Geraldine Alexsandra Sihombing\n");
    printf("NIM Saya adalah *11323009*\n");
    printf("Prodi saya adalah *D3 Teknologi Informasi\n");
    printf("Ini adalah program no 2\n\n");


    int n;
    printf("Input: ");
    scanf("%d", &n);

    
    int value = 1;
    printf("Output: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", value);
        value += 3;
    }

    printf("\n");

    return 0;
}