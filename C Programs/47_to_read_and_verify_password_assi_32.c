#include<stdio.h>
#include<string.h>
void main ()
{
    char set_pass[10]={"1234"},pass[10];
    int s,i;
    system("cls");
    for(;s!=0;)
    {
        printf("Enter password: ");
        scanf("%s",pass);
        s=strcmp(pass,set_pass);
        if(s==0)
        printf("Correct Password\n");
        else
        printf("Incorrect password\n");
    }
}

