#include<stdio.h>

int main(){
    char input = 'y';

    do{
        printf("Apakah anda ingin mengulang proses? (y/t): ");
        scanf(" %c", &input);
    }
    while(input=='y');
    printf ("\nPerulangan telah berhenti!");

}