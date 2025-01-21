#include <stdio.h>
#include <string.h>
int main ()
{
    char hobby1 [20] = "";
    char hobby2 [20] = "";
    char hobby3 [20] = "";

    printf("Enter hobby1:");
    scanf("%s", hobby1);
    strupr(hobby1);

    printf("Enter hobby2:");
    scanf("%s", hobby2);
    strupr(hobby2);

    printf("Enter hobby3:");
    scanf("%s", hobby3);
    strupr(hobby3);

    printf ("%s %s %s", hobby1, hobby2, hobby3);
    return 0;
}