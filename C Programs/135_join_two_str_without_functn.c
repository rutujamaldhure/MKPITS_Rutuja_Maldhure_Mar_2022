#include<stdio.h>
void main()
{
    char str1[20], str2[20], output_str[40];
    int i, l1=0, l2=0, l;
    system("cls");
    printf("Enter 1st string: ");
    scanf("%s",str1);
    printf("Enter 2nd string: ");
    scanf("%s",str2);
    for(i=0; str1[i]!='\0'; i++)
    {
        l1=l1+1;
        output_str[i]=str1[i];
    }
    for(i=0; str2[i]!='\0'; i++)
    {
        l2=l2+1;
    }
    l=l1+l2;
    for(i=l1; i<=l; i++)
    {
        output_str[i]=str2[i-l1];
    }
    printf("%s",output_str);
    
}