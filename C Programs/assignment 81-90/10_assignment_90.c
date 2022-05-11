#include<stdio.h>
void main()
{
    int a[50],n,i,t=0,m;
    system("cls");
    printf("Enter length of array: ");
    scanf("%d",&n);
    printf("Enter elements of an array\n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
    {
        m=a[i];
        if(a[i+1]==m)
        {
            if(a[i+2]==m)
            t=t+1;
        }
        else
        m=a[i+1];
    }
    if(t==0)
    printf("triple not found");
    else
    printf("%d times triple found",t);
}