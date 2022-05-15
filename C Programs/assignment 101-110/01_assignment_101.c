#include<stdio.h>
void main()
{
    int a[50],n,i;
    system("cls");
    printf("Enter length of array: ");
    scanf("%d",&n);
    printf("Enter elements of array:\n");
    for(i=0; i<n;i++)
    {
        printf("a[%d]= ",i);
        scanf("%d",&a[i]);
    }
    
    if(a[0]==a[n-1])
    printf("True ");
    else
    printf("False");
}