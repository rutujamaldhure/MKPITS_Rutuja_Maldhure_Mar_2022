#include<stdio.h>
void main()
{
    char input_str[20], lwr_str[20];
    int i, length=0;
    system("cls");
    printf("Enter string: ");
    scanf("%s",input_str);
    for(i=0; input_str[i]!='\0'; i++)
    {
        length=length+1;
    }

    for(i=0; i<length; i++)
    {
        if(input_str[i]>=65 && input_str[i]<=90)
        lwr_str[i]=input_str[i]+32;
        else
        lwr_str[i]=input_str[i];
        printf("%c",lwr_str[i]);
    }
}