#include<stdio.h>
void main ()
{
    int num,i, sq;
    system("cls");
    printf("Enter a number upto which square required ");
    scanf("%d",&num);
    i=1;
    do
    {
        if(i%2==0)
        {
            sq=i*i;
            printf("Square of %d = %d\n",i,sq);
        }
        i++;
    }while(i<=num);
}