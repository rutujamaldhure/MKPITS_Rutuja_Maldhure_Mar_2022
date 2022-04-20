#include<stdio.h>
void main ()
{
    printf("Enter number of lines ");
    scanf("%d",&l);
    n=1;

    for(r=1;r<=l;r++)
    {
        for(c=1;c<=3;c++)
        {
            printf("%d ",n);
            n=n+1;
        }
        printf("\n");
    }
}