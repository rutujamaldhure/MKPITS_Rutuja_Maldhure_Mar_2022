#include<stdio.h>
void main ()
{
    int a[5],s,i,n=0;
    system("cls");
    printf("Enter any 5 numbers \n");
    for(i=0; i<5; i++)
    {
        printf("a[%d]= ",i);
        scanf("%d",&a[i]);
    }
    printf("Enter number you want to search- ");
    scanf("%d",&s);
    for(i=0;i<5;i++)
    {
        if(a[i]==s)
        {
            printf("number is present at a[%d]",i);
            n=1;
        }
    }
    if(n==0)
    printf("Number not found");
}
