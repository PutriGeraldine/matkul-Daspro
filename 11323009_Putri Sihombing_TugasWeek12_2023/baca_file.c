#include<stdio.h>
#include<stdlib.h>
int main(){
    char *filename = "readme.txt";
    FILE *f; int c;
    if((f = fopen(filename, "r")) == NULL){
        puts("File Cannot Be Opened!");
        exit(1);
    }

    do{
        c = fgetc(f);
        if(feof(f)) break;
        printf("%c", c);
    }

    while (1);
    fclose(f);
    puts("");
    return 0;
}