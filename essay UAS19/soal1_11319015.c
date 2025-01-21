/*
Nama	: Amelia Sitanggang
NIM		: 11319015
Tanggal	: 17 januari 2019
Out put : Menuliskan kelayar jumlah huruf vokal
*/
#include<stdio.h>
int main (){
	char x[100];
	int A=0, I=0, U=0,E=0, O=0;
	char a[]="aA";
	char i[]="iI";
	char u[]="Uu";
	char e[]="eE";
	char o[]="oO";
	printf("String:\n");
	gets(x);

	int pjg, k, j;
	pjg=strlen(x);

	for (k = 0; k < pjg; k++)
	{
		for (j = 0; j < 2; j++)
		{
			if (x[k] == a[j])
			{
				A++;
			}
			else if (x[k]==i[j])
			{
				I++;
			}
			else if (x[k]==u[j])
			{
				U++;
			}
			else if (x[k]==e[j])
			{
				E++;
			}
			else if (x[k]==o[j])
			{
				O++;
			}
		}
	}
	if (A!=0)
	{
		printf("a = %d \n",A);
	}
	if (E!=0)
	{
		printf("e = %d \n",E);
	}
	if (I!=0)
	{
		printf("i = %d \n",I);
	}
	if (O!=0)
	{
		printf("o = %d \n",O);
	}
	if (U!=0)
	{
		printf("u = %d \n",U);
	}


	system("PAUSE");
	return 0;
}
