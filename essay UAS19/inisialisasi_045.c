/*
    Nama      : Yuni Yustina Siagian
	NIM       : 11421045
	File name : identifier_045.c
	Deskripsi : Tugas 1
	Tanggal   : 2-9-2021
*/
#include <stdio.h>
int main() {
	/*KAMUS*/
	short ks = 1;
	int ki = 1;
	long kl = 10000;
	char c = 65;        /*inisialisasi karakter fengan integer*/
	char cl = 'z';  /*inisialisasi karakter dengan karakter*/
	float x = 1.55;
	
	/*Algoritma*/
	/*penulisan karakter sebagai karakter*/
	printf ("karakter = %c\n", c);
	printf ("karakter = %c\n", cl);
	
	/*penulisan karakter sebagai integer*/
	printf ("karakter %d\n", c);
	printf ("karakter %d\n", cl);
	
	printf ("Bilangan integer (short) = %d\n", ks);
	printf ("(int) = %d\n", ki);
	printf ("(long) = %ld\n", kl);    //perhatikan format %ld//
	printf ("Bilangan Real = %f\n", x);
	return 0;
}
	