#include<stdio.h>
void main()
{
    int i,f=1, l1=0, l2=0, l;
    char n1[20],n2[20];
    system("cls");
    printf("Enter 1st string to compair: ");
    scanf("%s",n1);
    printf("Enter 2nd string to compair: ");
    scanf("%s",n2);

    for(i=0; n1[i]!='\0'; i++)
    {
        l1=l1+1;
    }
    for(i=0; n2[i]!='\0'; i++)
    {
        l2=l2+1;
    }
    
    if(l1>=l2)
    {
        l=l1;
    }
    else
    {
        l=l2;
    }

    for(i=0; i<=l; i++)
    {
        if(n1[i]!=n2[i])
        f=0;
    }
    if(f==1)
    printf("entered strings are equal");
    else
    printf("entered strings are not equal");

}