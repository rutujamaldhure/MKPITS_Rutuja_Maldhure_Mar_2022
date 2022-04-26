//assignment-62
#include<stdio.h>
void main()
{
    char ch , n=0;
    system("cls");
    printf("Upper Case Alphabets\n");
    for(ch=65; ch<=90; ch++)
    {
        printf("[%d= %c] ",ch,ch);
        n=n+1;
        if(n==4 ||n==8 ||n==12 || n==16 || n==20 || n==24)
        printf("\n"); 
    }

    printf("\n\n");
    printf("Lower Case Alphabets\n");
    n=0;
    for(ch=97; ch<=122; ch++)
    {
        printf("[%d= %c] ",ch,ch);
        n=n+1;
        if(n==4 ||n==8 ||n==12 || n==16 || n==20 || n==24)
        printf("\n");
    }
}