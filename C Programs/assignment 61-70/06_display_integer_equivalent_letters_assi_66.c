#include<stdio.h>
void main()
{
    int i;
    system("cls");
    printf("Integer equivalent to capital letters: \n");
    for(i=65; i<=90; i++)
    {
        printf("%c-%d  ",i,i);
        if(i==74|| i==84)
        printf("\n");
    }
    printf("\nInteger equivalent to small letters: \n");
    for(i=97; i<=122; i++)
    {
        printf("%c-%d  ",i,i);
        if(i==106|| i==116)
        printf("\n");
    }
}
