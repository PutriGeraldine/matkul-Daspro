#include <stdio.h>

int main()
{
    int u1 = 2;
    int b=3;
    int n=20;
    int un;
	
        printf("penyelenggaraan aritmatika: "); scanf("%d", &u1);
        printf("masukkan beda dari deret aritmatika: "); scanf("%d, &b");
        printf("masukkan banyak suku dari deret arimatika: "); scanf("%d", &n);
        
         un = u1 + ((n-1) *b);
         printf("suku ke-20 barisan aritmatika adalah %d\n", un);
         
         return(0);
}
