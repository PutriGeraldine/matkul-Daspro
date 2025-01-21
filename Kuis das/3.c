// Header file
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    printf("Nama Putri Geraldine Alexsandra Sihombing\n");
    printf("NIM Saya adalah *11323009*\n");
    printf("Prodi saya adalah *D3 Teknologi Informasi\n");
    printf("Ini adalah program no 3\n\n");


    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    int value = 1;
   
    printf("Output: ");
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 1)
        {
            printf("%d ", value);
        }
        else
        {
            printf("%d ", value * 3);
            value++;
        }
    }

    printf("\n");

    return 0;
}