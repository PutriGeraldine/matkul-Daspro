/*
Nama : Putri Geraldine Allexsandra Sihombing
NIM : 11323009
*/
#include <stdio.h>
#include <stdlib.h>
int main (){
    int rows;
    int cols;  
    printf("enter jumlah rows: ");
    scanf("%d", &rows);
    printf("enter jumlah cols: ");
    scanf("%d", &cols);
    
    int **arr = (int **)malloc(rows * sizeof(int *));

    for (int i = 0; i < rows; i++) {
        arr[i] = (int *)malloc(cols * sizeof(int));
    }
    int count = 1;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            arr[i][j] = count++;
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < rows; i++) {
        free(arr[i]);
    }
    free(arr);
    return 0;
}
