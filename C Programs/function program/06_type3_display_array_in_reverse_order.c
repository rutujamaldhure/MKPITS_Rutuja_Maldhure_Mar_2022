#include<stdio.h>
int revarr(int a[])
{
    int i,temp;
    for(i=0; i<=4/2; i++)
    {
       temp=a[i]; 
       a[i]=a[4-i];
       a[4-i]=temp;
    }
    return a;
}
void main()
{
    int num[5], i,*r;
    system("cls");
    printf("Enter any 5 numbers\n");
    for(i=0; i<5; i++)
    {
        printf("num[%d]= ",i);
        scanf("%d", &num[i]);
    }
    printf("Reverse of entered array- ");
    r= revarr(num);
    for(i=0; i<5; i++)
    {
        printf("%d ",r[i]);
    }
}