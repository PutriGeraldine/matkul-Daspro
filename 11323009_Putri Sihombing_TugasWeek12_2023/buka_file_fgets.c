#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    char *filename = "readme.txt";
    char buff[1024];
    FILE *f;
    if((f = fopen(filename, "r")) == NULL){
        puts("File Cannot Be Opened!");
        exit(1);
    }

    else{
       fgets(buff, 1024, f);
       printf("%s\n", buff);
    }
    fclose(f);
    return 0;
}