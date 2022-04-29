#include<stdio.h>
void main()
{
    char input_str[20];
    int i,length=0;
    system("cls");
    printf("Enter string: ");
    scanf("%s",input_str);
    for(i=0; input_str[i]!='\0'; i++)
    {
        length=length+1;
    }
    printf("Length of entered string= %d",length);
}