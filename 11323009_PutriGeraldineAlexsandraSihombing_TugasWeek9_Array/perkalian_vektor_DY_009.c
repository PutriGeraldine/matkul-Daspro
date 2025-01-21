/*
	Nama	 : Putri Geraldine Alecsandra Sihombing
	NIM		 : 11323009
	Deskripsi : Perkalian vektor menggunakan array
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
	int a[4];
	int b[4];
	int c;
	
	for(c=1; c<4; c++){
		printf("Masukkan nilai vektor a[%d] = ", c);
		scanf("%d", &a[c]);
	}
	
	for(c=1; c<4; c++){
		printf("Masukkan nilai vektor b[%d] = ",c);
		scanf("%d", &b[c]);
	}
	
	int s = (a[1]*b[1]) + (a[2]*b[2]) + (a[3]*b[3]);
	
	printf("Hasil kedua vektor adalah  %d", s);
	
}

