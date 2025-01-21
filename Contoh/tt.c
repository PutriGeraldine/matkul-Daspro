#include <stdio.h>
int main()
{
   
    int i, j, n;
    printf("masukkan angka:");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            if (i % 2 == 0 && j % 2 == 0 || j % 2 != 0 && i % 2 != 0) // jika i dan j adalah genap atau i dan j adalah ganjil
                                                                      // cetak bintang
                printf("* ");
            else
                // jika salah satu i atau j adalah ganjil dan satu lagi genap maka cetak bilangan asci
                printf("%c ", 65 + j);
        }
        printf("\n");
    }
    return 0;
}