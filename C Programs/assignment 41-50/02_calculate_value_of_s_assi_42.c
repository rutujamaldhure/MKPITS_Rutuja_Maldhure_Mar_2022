#include<stdio.h>
void main ()
{
    double sum =0 ,i, j=1;
    system("cls");

    for(i=1 ; i<8; i=i+2)
    {
        sum=sum+i/j;
        j=j*2;
    }
    printf("sum of all elements=%lf",sum);
}