// Header file
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    printf("Nama Putri Geraldine Alexsandra Sihombing\n");
    printf("NIM Saya adalah *11323009*\n");
    printf("Prodi saya adalah *D3 Teknologi Informasi\n");
    printf("Ini adalah program no 1\n\n");

    int num1, num2, num3;

    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    printf("Enter third numbers: ");
    scanf("%d", &num3);


    if (num1 > num2)
    {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }
    if (num2 > num3)
    {
        int temp = num2;
        num2 = num3;
        num3 = temp;
    }
    if (num1 > num2)
    {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

    printf("Numbers in ascending order: %d %d %d\n", num1, num2, num3);

    return 0;
}
