/*
Nama	: Amelia Sitanggang
NIM		: 11319015
Tanggal	: 17 januari 2019
Out put : Menuliskan kelayar jumlah huruf vokal
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    int n,k;
    int total = 0;
    float ave;
    int i=0;
    int maks=0;
    int min = n;

    fp = fopen("UAS.txt", "r");

    if(fp == NULL)
    {
        printf("File tidak ditemukan");
    }
    else
    {
        while(!feof(fp))
        {
            fscanf(fp, "%d\n", &n);
            total+= n;
            i++;
            
            if (maks < n)
            {
            	maks=n;
            }
            if (min > n)
            {
            	min = n;
            }
        }
        ave=total/i;
    }
    printf("Average: %.2f\n", ave);
    printf("Sum: %d\n", total);
    printf("Minimum: %d\n", min);
    printf("Maksimum: %d\n", maks);
    fclose(fp);
    return 0;
}
