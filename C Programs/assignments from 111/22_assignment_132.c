#include<stdio.h>
void main()
{
    int a[50], n, i,c=0,temp;
    system("cls");
    printf("Enter length of an array: ");
    scanf("%d",&n);
    printf("Enter elements of an array:\n");
    for(i=0; i<n; i++)
    {
        printf("a[%d]= ",i);
        scanf("%d",&a[i]);
    }

    i=0;
    temp=a[0];
    while(a[i]==temp && a[i]==a[n-1-i])
    {
        c=c+1;
        i++;
    }
    if(c>0)
    printf("True");
    else
    printf("False");
}