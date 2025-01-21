/*
	Nama	 : Putri Geraldine Alexsandra Sihombing
	NIM		 : 11323009
    Deskripsi : penjumlahan array dinamis
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
	int a, b;
	int **mat1;
	int **mat2;
	int **s;
	int g, u;
	int l, h;
	
	printf("Masukkan jumlah baris dan jumlah kolom pada matriks 1: ");
	scanf("%d %d", &g, &u);
	
	printf("Masukkan jumlah baris dan jumlah kolom pada matriks 2: ");
	scanf("%d %d", &l, &h);
	
	printf("\nInput elemen Matriks 1: \n");
	
	mat1 = (int **)malloc(g*sizeof(int*));
	for(a=0; a<g; a++){
		mat1[a] = (int *)malloc(u*sizeof(int));
	}

	for(a=0; a<g; a++){
		for(b=0; b<u; b++){
			scanf("%d", &mat1[a][b]);
		}
	}
	
	printf("\nInput Elemen Matriks 2: \n");
	
	mat2 = (int **)malloc(l*sizeof(int*));
	for(a=0; a<l; a++){
		mat2[a] = (int *)malloc(h*sizeof(int));
	}
	
	for(a=0; a<l; a++){
		for(b=0; b<h; b++){
			scanf("%d", &mat2[a][b]);
		}
	}
	
	printf("\nMatriks 1: \n");
	
	for(a=0; a<g; a++){
		for(b=0; b<u; b++){
			printf("%d\t", mat1[a][b]);
		}
		printf("\n");
	}
	
	printf("\nMatriks 2: \n");
	
	for(a=0; a<l; a++){
		for(b=0; b<h; b++){
			printf("%d\t", mat2[a][b]);
		}
		printf("\n");
	}
	
	if(g==l && u==h){
		printf("\nHasil Penjumlahan kedua matriks : \n");
		for(a=0; a<g; a++){
			for(b=0; b<u; b++){
				int s = mat1[a][b] + mat2[a][b];
				printf("%d\t", s);
			}
			printf("\n");
		}
	}
	else
		printf("\nPenjumlahan Kedua Matriks Tidak Dapat Dilakukan!");
	
	
	return 0;
}
