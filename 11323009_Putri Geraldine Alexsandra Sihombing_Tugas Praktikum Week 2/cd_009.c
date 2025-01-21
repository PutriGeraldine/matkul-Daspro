#include <stdio.h>

int main()
{
    float a = 639;
    float b = 1251;
    float cd;
    float hasil;

    printf("Jika 639cd = 1251\n Berapa nilai cd? \n");

    cd= b/a;
    hasil = a*cd;
    printf("*********\n");
    printf("%.0fcd = %.0f\n", a,b);
    printf("cd = %.0f / %.0f\n", a,b);
    printf("cd = %f\n", cd);
    printf("*********\n");
    printf("%.0f x %f = %.0f",a,cd,hasil);

    return 0;
}
