#include <stdio.h>
int main()
{
    printf("Nama saya adalah Putri Geraldine Alexsandra Sihombing\n");
    printf("NIM saya adalah 11323009\n");
    printf("Prodi saya adalah Diploma 3 Teknologi Informasi\n");
    printf("ini adalah program segitiga bintang yang aneh\n\n");

    int i, j, n;
    printf("masukkan angka:");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            if (i % 2 == 0 && j % 2 == 0 || j % 2 != 0 && i % 2 != 0) 
                printf("* ");
            else
            
                printf("%c ", 65 + j);
        }
        printf("\n");
    }
    return 0;
}
