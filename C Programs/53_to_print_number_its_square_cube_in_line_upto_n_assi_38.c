#include<stdio.h>
void main ()
{
    int n,i=1, sq, cube;
    system("cls");
    printf("Enter a number\n");
    scanf("%d",&n);
    while(i<=n)
    {
        sq=i*i;
        cube=i*i*i;
        printf("%d %d %d",i,sq,cube);
        printf("\n");
        i++;
    }
}