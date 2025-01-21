#include <stdio.h>
#include <string.h>
int main ()
{
    char str1[100];
    char str2[100];
    char rj [100];
    

    printf("Enter word 1:");
    scanf("%s", str1);

    printf("Enter word 2:");
    scanf("%s", str2);

    strcpy (rj, str1);
    strcpy (str1,str2);
    strcpy (str2, rj);


    printf("word 1 adalah: %s word 2 adalah: %s", str1, str2);
    return 0;
}