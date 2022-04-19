#include<stdio.h>
void main()
{
    int t=0,n=0,marks;
    float avg;
    system("cls");
    n=1;
    do
    {
        printf("Enter marks of roll no %d ",n);
        scanf("%d",&marks);
        t=t+marks;
        n++;
    }while(marks>0);
    avg=(float)t/(float)(n-2);
    printf("Average marks=%f",avg);
}