/*
Nama	: Amelia Sitanggang
NIM		: 11319015
Tanggal	: 17 januari 2019
Out put : Menuliskan kelayar jumlah huruf vokal
*/
#include <stdio.h>
#include <string.h>
int main(){
	char kalimat[100];
	char kata2[100];
	char cari[100];
	int i,n,j;
	printf("Kata 1 : ");
	scanf("%s",&kalimat);
	printf("Kata 2 : ");
	scanf("%s",&cari);
	int a = strlen(kalimat);
	int b = strlen(cari);
	if (a<b)
		a=b;

	for (i = 0; i < a; ++i)
	{
		if (strcmp(kalimat,cari)!=0)
		{
			printf("%c ",kalimat[i]);
		}
	}
	return 0;
}
