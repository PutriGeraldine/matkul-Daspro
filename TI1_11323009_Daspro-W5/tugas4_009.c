#include<stdio.h>
#include<stdlib.h>

int main(){
    int bil,i,j,buffer;
    printf("Inputkan Bilangan: ");
    scanf("%d", &bil);

    for(int i=0; i<=bil; i++){
        buffer = bil;
        for (int j= 0; j<=bil; j++){
            printf("%d ", buffer);
            buffer--;
            if(i==j){
                break;
            }
        }
        printf("\n");
    }
    return 0;
}