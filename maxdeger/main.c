#include <stdio.h>
#include <stdlib.h>

int en_buyuk(int dizi[], int max, int n)
{
    if(n == 0)
    {
        if(dizi[n] > max)
    max = dizi[n];
    return max;
    }
    else
    {
        if(dizi[n] > max)
            max = dizi[n];
        return en_buyuk(dizi, max, n-1);
    }
}

int main(void)
{
    int i;
    int dizi[10];

    printf("\tLUTFEN 10 TANE SAYI GIRINIZ!\t\n");

    printf("1. sayi: ");
    scanf("%d", &dizi[0]);

    for(i=1; i<10; i++)
    {
        printf("%d. sayi: ", i+1);
        scanf("%d", &dizi[0]+i);
    }


    int max=0;
    max = en_buyuk(dizi, max, 10);

    printf("En buyuk sayi: %d", max);

    return 0;
}
