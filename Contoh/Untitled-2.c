#include <stdio.h>

int main ()
{
    int n;

    printf("Input : "); scanf("%d", &n);
    printf ("\n");

    for(int i = n ; i >= 1 ; i--){
        for(int j = i ;j >= 1 ; j--){
            if (j == 1 || i == n || i == j)
            {
                printf("* ");
            }
            else 
                printf("  ");
        }
        printf("\n");
    }
return 0;
}