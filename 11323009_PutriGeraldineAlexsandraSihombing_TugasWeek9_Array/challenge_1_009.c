/*
	Nama	 : Putri Geraldine Alexsandra Sihombing
	NIM		 : 11323009
    Deskripsi : penjumlahan array statis
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
	int a, b;
	int g[2][3] = {
		{4, 3, 1},
		{1, 2, 5}
	};
	int f[2][3] = {
		{24, 11, 2},
		{14, 6, 9}
	};
	
	printf("Matriks 1 : \n");
	for(a=0; a<2; a++){
		for(b=0; b<3; b++){
			printf("%d\t", g[a][b]);
		}
		printf("\n");
	}
	
	printf("\nMatriks 2 : \n");
	for(a=0; a<2; a++){
		for(b=0; b<3; b++){
			printf("%d\t", f[a][b]);
		}
		printf("\n");
	}
	
	printf("\nJumlah kedua matriks adalah \n");
	for(a=0; a<2; a++){
		for(b=0; b<3; b++){
			int m = g[a][b] + f[a][b];
			printf("%d\t", m);
		}
		printf("\n");
	}
	return 0;
}
