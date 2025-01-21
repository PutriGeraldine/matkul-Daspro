#include<stdio.h>

int main(){
    char input = 'y';

    while (input =='y'){
        printf("Apakah anda ingin mengulang proses? (y/t): ");
        scanf(" %c", &input);
    }
    printf ("\nPerulangan telah berhenti!");

}