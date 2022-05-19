#include<stdio.h>
#include<conio.h>

int elemanArama(int a[], int length, int key)
{
    int i;
    for(i=0; i<length; i++)
    {
        if(a[i] == key)
        {
            return i;
        }
    }
    return -1;
}

void main()
{
    int a[10] = {0};
    int length;
    int i=0;
    printf("Dizinin uzunluðunu giriniz: ");
    scanf("%d", &length);
    while(i<length)
    {
        printf("Eleman Giriniz: ");
        scanf("%d", &a[i]);
        i++;
    }

    for(int j=0; j<length; j++)
    {
        printf("%d\n", a[j]);
    }

    int devam = 1;
    int key;
    while( devam )
    {
        printf("Aranacak elemani giriniz: ");
        scanf("%d", &key);
        int aramaSonuc = elemanArama( a, length, key);
        if( aramaSonuc != -1 )
        {
            printf("%d elemani %d. indeksinde bulundu\n", a[ aramaSonuc ], aramaSonuc );
        }
        else
        {
            printf("Eleman Bulunamadi\n");
        }
        printf("Aramaya devam etmek ister misiniz...(Evet:1, Hayir: 0): ");
        scanf("%d", &devam);
        if( devam == 0 )
        {
            printf("Programdan cikiliyor...\n");
        }
    }


}
