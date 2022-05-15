#include<stdio.h>
void main()
{
    int a[50],n,i,b=0,c=0;
    system("cls");
    printf("Enter length of array: ");
    scanf("%d",&n);
    printf("Enter elements of array:\n");
    for(i=0; i<n;i++)
    {
        printf("a[%d]= ",i);
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
    {
        if(a[i]==10)
        c=c+1;
        if(a[i]==20)
        b=b+1;
    }
    if(b>=2 || c>=2)
    printf("True");
    else
    printf("False");
    
}