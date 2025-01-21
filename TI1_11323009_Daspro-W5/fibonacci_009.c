#include <stdio.h>
int main(){
    int n;
    int fn;
    int fn1 = 0;
    int fn2 = 1;

    printf("masukkan nilai input: ");
    scanf ("%d", &n);


    for(int i=1; i<= n; i++){
        fn = fn1+ fn2;
        fn2 = fn1;
        fn1= fn;
            printf("%d ", fn);
    }
    return 0;
}