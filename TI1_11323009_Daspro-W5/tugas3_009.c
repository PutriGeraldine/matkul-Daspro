#include<stdio.h>

int main(){

int bilangan;
int batas;
int a = 0;
int b;

printf("Masukkan angka: ");
scanf("%d", &bilangan);

b = bilangan/2;

for (batas = 2; batas < b; ++batas);{
    if(bilangan % batas == 0){
        a = 1;
    }
}
if(bilangan == 1){
    printf("1 bukan bilangan prima");
}
else if(a == 0){
    printf("%d merupakan bilangan prima", bilangan);
}
else{
    printf("%d merupakan bilangan komposite", bilangan);
}
return 0;
}