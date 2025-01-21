/*
	Nama	 : Putri Geraldine Alecsandra Sihombing
	NIM		 : 11323009
	Deskripsi : Perkalian vektor menggunakan array
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	int a;
	int r[10];
	
	for(a=0;a<10;a++){
		printf("Masukkan nilai array r[%d]: ",a);
		scanf("%d", &r[a]);
	}
	for(a=0;a<10;a++)
		printf("%d\n",r[a]);
		
	system("PAUSE");
	return 0;
}

