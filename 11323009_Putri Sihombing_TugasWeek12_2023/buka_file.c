#include<stdio.h>
int main(){
    FILE *fp; //deklarasikan sebuah variabel 'fp' dengan tipe data FILE *
    if((fp = fopen("readme.txt", "r")) == NULL){
        printf("error reading file!");
    }

    else{
        puts("successful opening file..."); //fungsi 'puts' sama dengan 'printf' dengan tambahan '\n'
    }

    fclose(fp); //setelah digunakan, fp harus ditutup agar tidak menumpuk di memori
    return 0;
}