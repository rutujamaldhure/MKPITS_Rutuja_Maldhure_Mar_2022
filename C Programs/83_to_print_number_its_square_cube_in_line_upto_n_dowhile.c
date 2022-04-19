#include<stdio.h>
void main ()
{
    int n,i=1, sq, cube;
    system("cls");
    printf("Enter a number\n");
    scanf("%d",&n);
    do
    {
        sq=i*i;
        cube=i*i*i;
        printf("%d %d %d",i,sq,cube);
        printf("\n");
        i++;
    }while(i<=n);
}