// Header file
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    printf("Nama Putri Geraldine Alexsandra Sihombing\n");
    printf("NIM Saya adalah *11323009*\n");
    printf("Prodi saya adalah *D3 Teknologi Informasi\n");
    printf("Ini adalah program no 4\n\n");

    int n;
    printf("Input: ");
    scanf("%d", &n);


    if (n <= 0)
    {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1; 
    }

    printf("Output:\n");
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            if (j == i || j == 1 || i == n || i == 1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0; 
}
