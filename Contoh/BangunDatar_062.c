/*
	Nama		: Olyvia Siahaan
	NIM			: 11321062
	Kelas		: 31TI2
	Deskripsi	: Program akan menghitung keliling dan luas dareah bidang
				  datar tergantung pilihan dari pengguna
	Tanggal		: 08 Oktober 2021
*/

#include <stdio.h>
#include <stdlib.h>

int luasPersegi(int s);
int kelPersegi(int s);
int luasPersegiPanjang(int p, int l);
int kelPersegiPanjang(int p, int l);
float luasLingkaran(float phi, float r);
float kelLingkaran(float phi, float r);
int luasJajarGenjang(int a, int t);
int kelJajarGenjang(int s, int a);
float luasTrapesium(float a, float t, float b);
int kelTrapesium(int a, int b, int c, int d);
float luasLayang(float d1 , float d2);
int kelLayang(int a, int b);

int main()
{
    char menu[20];
    char jwb;
    menu:
        printf("\t====Menghitung Keliling dan Luas Bidang Datar====\n");
        printf("1. Persegi\n");
        printf("2. Persegi Panjang\n");
        printf("3. Lingkaran\n");
        printf("4. Jajar Genjang\n");
        printf("5. Trapesium\n");
        printf("6. Layang-layang\n");
        printf("\tMasukkan Pilihan Anda : ");
        scanf("%s", menu);

    if(strcmp(menu, "1")==0){
        system("cls");
        printf("\t====Menghitung Keliling dan Luas Bidang Datar====\n\n");
        int s;
        printf("Masukkan panjang sisi Persegi : ");
        scanf("%d", &s);
        printf("\nLuas Persegi                  : %d\n", luasPersegi(s));
        printf("Keliling Persegi              : %d\n\n", kelPersegi(s));
    }


    if(strcmp(menu, "2")==0){
        system("cls");
        printf("\t====Menghitung Keliling dan Luas Bidang Datar====\n\n");
        int p,l;
        printf("Masukkan panjang Persegi Panjang : ");
        scanf("%d", &p);
        printf("Masukkan lebar Persegi Panjang   : ");
        scanf("%d", &l);
        printf("\nLuas Persegi Panjang             : %d\n", luasPersegiPanjang(p,l));
        printf("Keliling Persegi Panjang         : %d\n\n", kelPersegiPanjang(p,l));
    }

    if(strcmp(menu, "3")==0){
        system("cls");
        printf("\t====Menghitung Keliling dan Luas Bidang Datar====\n\n");
        float r;
        float phi = 3.14;
        printf("Masukkan jari-jari lingkaran : ");
        scanf("%f", &r);
        printf("\nLuas Lingkaran               : %.2f\n", luasLingkaran(phi, r));
        printf("Keliling Lingkaran           : %.2f\n\n", kelLingkaran(phi, r));
    }

    if(strcmp(menu, "4")==0){
        system("cls");
        printf("\t====Menghitung Keliling dan Luas Bidang Datar====\n\n");
        int a,t,s;
        printf("Masukkan alas Jajar Genjang           : ");
        scanf("%d", &a);
        printf("Masukkan tinggi Jajar Genjang         : ");
        scanf("%d", &t);
        printf("Masukkan sisi sejajar 1 Jajar Genjang : %d\n", a);
        printf("Masukkan sisi sejajar 2 Jajar Genjang : ");
        scanf("%d", &s);
        printf("\nLuas Jajar Genjang                    : %d\n", luasJajarGenjang(a, t));
        printf("Keliling Jajar Genjang                : %d\n\n", kelJajarGenjang(a,s));
    }

    if(strcmp(menu, "5")==0){
        system("cls");
        printf("\t====Menghitung Keliling dan Luas Bidang Datar====\n\n");
        int c,d;
        float a,b,t;
        printf("Masukkan tinggi Trapesium     : ");
        scanf("%f", &t);
        printf("Masukkan alas Trapesium       : ");
        scanf("%f", &a);
        printf("Masukkan sisi atas Trapesium  : ");
        scanf("%f", &b);
        printf("Masukkan sisi kiri Trapesium  : ");
        scanf("%d", &c);
        printf("Masukkan sisi kanan Trapesium : ");
        scanf("%d", &d);
        printf("\nLuas Trapesium                : %.2f\n", luasTrapesium(a,b,t));
        printf("Keliling Trapesium            : %d\n\n", kelTrapesium(a,b,c,d));
    }

    if(strcmp(menu, "6")==0){
        system("cls");
        printf("\t====Menghitung Keliling dan Luas Bidang Datar====\n\n");
        int a,b;
        float d1,d2;
        printf("Masukkan Diagonal 1 Layang-layang : ");
        scanf("%f", &d1);
        printf("Masukkan Diagonal 2 Layang-layang : ");
        scanf("%f", &d2);
        printf("Masukkan sisi 1 Layang-layang     : ");
        scanf("%d", &a);
        printf("Masukkan sisi 2 Layang-layang     : ");
        scanf("%d", &b);
        printf("\nLuas Layang-layang                : %.2f\n", luasLayang(d1, d2));
        printf("Keliling Layang-layang            : %d\n\n", kelLayang(a, b));
    }

    do{
        printf("Kembali ke Menu ? (Enter M/m)\n");
        printf("Keluar ? (Enter E/e)\n");
        scanf("%s", &jwb);
        if(jwb=='M'||jwb=='m'){
            system("cls");
            goto menu;
        }else{
            break;}
    }while(jwb!='M'||jwb!='m'||jwb!='E'||jwb!='e');

}

//fungsi
int luasPersegi(int s)
{
    return(s*s);
}

int kelPersegi(int s)
{
    return(s+s+s+s);
}

int luasPersegiPanjang(int p, int l)
{
    return(p*l);
}

int kelPersegiPanjang(int p, int l)
{
    return((2*p)+(2*l));
}

float luasLingkaran(float phi, float r)
{
    return(phi*r*r);
}

float kelLingkaran(float phi, float r)
{
    return(2*phi*r);
}

int luasJajarGenjang(int a, int t)
{
    return(a*t);
}

int kelJajarGenjang(int s, int a)
{
    return((2*a)+(2*s));
}

float luasTrapesium(float a, float b, float t)
{
    return(((a+b)/2)*t);
}

int kelTrapesium(int a, int b, int c, int d)
{
    return(a+b+c+d);
}

float luasLayang(float d1, float d2)
{
    return(d1*d2/2);
}

int kelLayang(int a, int b)
{
    return((a*2)+(b*2));
}

