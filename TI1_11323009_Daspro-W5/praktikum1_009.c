#include <stdio.h>

int main(){
    int input;

    printf("Inputkan angka yang anda inginkan: ");
    scanf ("%d", &input);

    for(int i=1; i<=input; i++){
        for(int j=1; j<=input; j++){
            printf("%d ", j);
        }
        printf ("\n");
    }
}