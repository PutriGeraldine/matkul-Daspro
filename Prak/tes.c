#include <stdio.h>
#include <string.h>

int main() {
    char x[100];
    int A = 0, I = 0, U = 0, E = 0, O = 0;
    
    printf("String: ");
    fgets(x, sizeof(x), stdin);

    int pjg, k, j;
    pjg = strlen(x);

    for (k = 0; k < pjg; k++) {
        switch (x[k]) {
            case 'a':
            case 'A':
                A++;
                break;
            case 'e':
            case 'E':
                E++;
                break;
            case 'i':
            case 'I':
                I++;
                break;
            case 'o':
            case 'O':
                O++;
                break;
            case 'u':
            case 'U':
                U++;
                break;
        }
    }

    if (A != 0) {
        printf("a = %d \n", A);
    }
    if (E != 0) {
        printf("e = %d \n", E);
    }
    if (I != 0) {
        printf("i = %d \n", I);
    }
    if (O != 0) {
        printf("o = %d \n", O);
    }
    if (U != 0) {
        printf("u = %d \n", U);
    }

    return 0;
}