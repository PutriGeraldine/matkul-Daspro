/*
Nama : Putri Geraldine Alexsandra Sihombing
NIM : 11323009
Deskripsi : kode yang menggunakan struktur keputusan dengan sintaks switch case
Tanggal : 25 September 2023 
*/

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	int x;
	int y;
	int z;
	char operasi;
	printf("Masukkan operasi aritmatika(+,-,x,/): ");
	scanf("%c", &operasi);
	
	switch(operasi)
	{
		case '+':
			printf("Masukkan 2 bilangan bulat \n");
			scanf("%d %d", &x, &y);
			printf("x = %d \t y = %d\n\n", x,y);
			z = x+y;
			printf("x+y = %d\n", z);
			break;
		case'-':
            printf("Masukkan 2 bilangan bulat \n");
			scanf("%d %d", &x, &y);
			printf("x = %d \t y = %d\n\n", x,y);
			z = x-y;
			printf("x-y = %d\n", z);
			break;
		case'x':
			printf("Masukkan 2 bilangan bulat \n");
			scanf("%d %d", &x, &y);
			printf("x = %d \t y = %d\n\n", x,y);
			z = x*y;
			printf("x*y = %d\n", z);
			break;
		case'/':
            printf("Masukkan 2 bilangan bulat \n");
			scanf("%d %d", &x, &y);
			printf("x = %d \t y = %d\n\n", x,y);
			float temp = (float) x/y;
			printf("x/y = %d\n", temp);
			break;
	}
	return 0;
}