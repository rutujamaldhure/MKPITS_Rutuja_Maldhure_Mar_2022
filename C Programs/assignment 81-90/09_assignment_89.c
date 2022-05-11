#include<stdio.h>
void main()
{
    int a[50],n,i,t=0;
    system("cls");
    printf("Enter length of array: ");
    scanf("%d",&n);
    printf("Enter elements of an array\n");
    for(i=0; i<=n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<=n; i++)
    {
        if(a[i]==5)
        {
            if(a[i+1]==5 || a[i+1]==6)
            {
                t=t+1;
            }
        }
    }
    if(t==0)
    printf("not found");
    else
    printf("%d times sequence of two 5's or 5,6 occurs ",t);
}