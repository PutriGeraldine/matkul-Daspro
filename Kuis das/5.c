// Header file
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    printf("Nama Putri Geraldine Alexsandra Sihombing\n");
    printf("NIM Saya adalah *11323009*\n");
    printf("Prodi saya adalah *D3 Teknologi Informasi\n");
    printf("Ini adalah program no 5\n\n");

    int number, result;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    result = sum(number);

    printf("sum = %d", result);
    return 0;
}

int sum(int n)
{
    if (n != 0)
        
        return n + sum(n - 1);
    else
        return n;
}
