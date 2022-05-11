#include<stdio.h>
struct customer
{
    int id;
    char name[20], mob_no[10];
};
void main()
{
    int i,j,l1,l2;
    struct customer s[5];
    system("cls");
    for(i=0; i<5; i++)
    {
        printf("Enter customer id: ");
        scanf("%d",&s[i].id);
        printf("Enter customer name: ");
        scanf("%s",s[i].name);
        printf("Enter customer mobile number: ");
        scanf("%s",s[i].mob_no);
    }
    printf("\ncustomers having 88 at the end of mobile no are- \n");
    for(i=0; i<5; i++)
    {
        l1=s[i].mob_no[9];
        l2=s[i].mob_no[8];
       
        if(l1==56 && l2==56)
        {
            printf("customer id:%d\ncustomer name: %s\ncustomer contact no:%s\n\n",s[i].id,s[i].name,s[i].mob_no);
        }
    }
        
}