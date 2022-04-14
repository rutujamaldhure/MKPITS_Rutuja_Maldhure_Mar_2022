#include<stdio.h>
void main()
{
    int t=0,n=0,marks;
    float avg;
    system("cls");
    printf("Enter marks of Roll No 1 ");
    scanf("%d", &marks);
    while(marks>0)
    {
        t=t+marks;
        n=n+1;
        printf("Enter marks of roll no %d ",n+1);
        scanf("%d",&marks);
    }
    avg=(float)t/(float)n;
    printf("Average marks=%f",avg);
}