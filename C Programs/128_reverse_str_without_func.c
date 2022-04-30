#include<stdio.h>
#include<string.h>
void main ()
{
    char str1[20], str2[20],temp;
    int i, l=0, last;
    system("cls");
    printf("Enter string to reverse: ");
    scanf("%s",str1);
    for(i=0; str1[i]!='\0'; i++)
    {
        l=l+1;
    }
    last=l-1;
    for(i=0; i<=last/2; i++)
    {
        temp=str1[i];
        str1[i]=str1[last-i];
        str1[last-i]=temp;
    }
    printf("%s",str1);

}