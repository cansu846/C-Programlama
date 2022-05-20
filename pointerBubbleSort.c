
#include<stdio.h>
#include<ctype.h>
#define SIZE 10
void bubleShort(  int * const array, int length );
void main()
{
    const char string[] = "cansu kocaoglu 2022";
    int  a[SIZE]= {104,26,5,21,12,65,350,1,3,2};
    printf("Orijinal array:\n");
    for(int i=0; i<SIZE; i++)
    {
        printf("%d  ", a[i]);

    }
    bubleShort(  a, SIZE );
    puts("\n\n");
    printf("Changed array:\n");
    for(int i=0; i<SIZE; i++)
    {
        printf("%d  ", a[i]);
    }
    puts("");
}
void bubleShort(  int * const array, int length )
{
    void swap( int * elementPtr1, int *elementPtr2 );
    int i,j;
    for(  i=0; i<length-1; i++)
    {
        for( j=0; j<length-1; j++ )
        {
            if( *( array+j )> *(array+j+1) )
            {
                swap( array+j, array+j+1 );
            }
        }
    }
}

void swap( int *elementPtr1, int *elementPtr2 )
{
    int hold = *elementPtr1;
    *elementPtr1 = *elementPtr2;
    *elementPtr2 = hold;
}
