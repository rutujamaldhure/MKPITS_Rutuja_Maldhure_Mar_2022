/*Find the number of business days between 2 dates. Business days means sat and sun should not be calculated in days count. 
E.g. fromDate: 2022-04-01 toDate: 2022-04-31.
Number of days = 21
If toDate is less than fromDate it should show the toDate should be greater than fromDate*/
#include<stdio.h>
void main ()
{
int d1,d2,m1,m2,y1,y2, days,month,i, month1=0, month2=0 , month3=0,day1, day2, day3=0,year=0,lyear=0,dyear;
system("cls");
printf("Enter fromDate in dd mm yyyy format : "); 
scanf("%d %d %d",&d1, &m1, &y1);
printf("Enter toDate in dd mm yyyy format : ");
scanf("%d %d %d",&d2,&m2, &y2);
if(y2==y1 && m2==m1 && d1>d2) //if entered dates are of same year same month but todate is less than from date
{
    printf("toDate should be greater than fromDate"); 
}
else
if(y2==y1 && m2==m1 && d1<d2) 
{
    days=d2-d1;
    printf("%d days are there in between these two dates ",days);
}
else
if(y2==y1 && m1>m2)
{
    printf("toDate should be greater than fromDate");
}
else
if(y2==y1 && m1<m2)
{
    if(y1%4==0)      //check if leap year
    {
        i=m1+1;               //calculate months between two dates
        while(i<m2)    
        {
            if(i==2)
            {
                month1=month1+1;
            }
            else
            if(i==4 || i==6 || i==9 || i==11)
            {
                month2=month2+1;
            }
            else
            {
                month3=month3+1;
            }
            i++;
        }
        day1= (month1*29)+ (month2*30) + (month3*31); // total days of in between month
        if(m1==2)  //to check days of 1st month
        {
            day2=(29-d1);
        }
        else
        if(m1==4 || m1==6 || m1==9 || m1==11)
        {
            day2=(30-d1);
        }
        else
        {
            day2=(31-d1);
        }
        days= day1+day2+d2; //calculate total days
        printf("%d days are there in between these two dates",days);
    }
    else
    {
        i=m1+1;    //for non leap year
        while(i<m2)
        {
            if(i==2)
            {
                month1=month1+1;
            }
            else
            if(i==4 || i==6 || i==9 || i==11)
            {
                month2=month2+1;
            }
            else
            {
                month3=month3+1;
            }
            i++;
        }
        day1= (month1*28)+ (month2*30) + (month3*31);
        if(m1==2)
        {
            day2=(28-d1);
        }
        else
        if(m1==4 || m1==6 || m1==9 || m1==11)
        {
            day2=(30-d1);
        }
        else
        {
            day2=(31-d1);
        }
        days= day1+day2+d2;
        printf("%d days are there in between these two dates",days);
    }
}
else
if(y1>y2)     //if entered dates are of two different years
{
    printf("toDate should be greater than fromDate");
}
else
{
    if(y1%4==0)  //check for leap year
    {
        i=y1+0001;
        while(i<y2)
        {
            if(i%4==0)
            {
                lyear=lyear+1;
            }
            else
            {
                year=year+1;
            }
            i=i+0001;
        }
        dyear=(lyear*366)+(year*365); //total days of in between year
        i=m1+1;
        while(i<=12)     //calculation for days of month before end of year
        {
            if(i==2)
            {
                month1=month1+1;
            }
            else
            if(i==4 || i==6 || i==9 || i==11)
            {
                month2=month2+1;
            }
            else
            {
                month3=month3+1;
            }
                i++;
        }
        day1= (month1*29)+ (month2*30) + (month3*31);

        if(m1==2)     //calculate remaining days of month of 1st entered date 
        {
            day2=(29-d1);
        }
        else
        if(m1==4 || m1==6 || m1==9 || m1==11)
        {
            day2=(30-d1);
        }
        else
        {
            day2=(31-d1);
        }
        //to calculate days of last year you entered
        i=1; 
        month1=0;
        month2=0;
        month3=0;
        while(i<m2)
        {
            if(i==2)
            {
                month1=month1+1;
            }
            else
            if(i==4 || i==6 || i==9 || i==11)
            {
                month2=month2+1;
            }
            else
            {
                month3=month3+1;
            }
            i++;
        }
        day3=(29*month1)+(30*month2)+(31*month3);
        days=dyear+day1+day2+day3+d2;
        printf("%d days are there in between these two dates",days);
    }
    else   // same for non leap year
    {
        i=y1+0001;
        while(i<y2)
        {
            if(i%4==0)
            {
                lyear=lyear+1;
            }
            else
            {
                year=year+1;
            }
            i=i+0001;
        }
        dyear=(lyear*366)+(year*365);
        i=m1+1;
        while(i<=12)
        {
            if(i==2)
            {
                month1=month1+1;
            }
            else
            if(i==4 || i==6 || i==9 || i==11)
            {
                month2=month2+1;
            }
            else
            {
                month3=month3+1;
            }
            i++;
        }
        day1= (month1*28)+ (month2*30) + (month3*31);

        if(m1==2)
        {
            day2=(28-d1);
        }
        else
        if(m1==4 || m1==6 || m1==9 || m1==11)
        {
            day2=(30-d1);
        }
        else
        {
            day2=(31-d1);
        }
        if(y2%4==0)
        {
            i=1;
            month1=0;
            month2=0;
            month3=0;
            while(i<m2)
            {
                if(i==2)
                {
                    month1=month1+1;
                }
                else
                if(i==4 || i==6 || i==9 || i==11)
                {
                    month2=month2+1;
                }
                else
                {
                    month3=month3+1;
                }
                i++;
            }
            day3=(29*month1)+(30*month2)+(31*month3);
        }
        else
        {
            i=1;
            month1=0;
            month2=0;
            month3=0;
            while(i<m2)
            {
                if(i==2)
                {
                    month1=month1+1;
                }
                else
                if(i==4 || i==6 || i==9 || i==11)
                {
                    month2=month2+1;
                }
                else
                {
                    month3=month3+1;
                }
                i++;
            }
            day3=(28*month1)+(30*month2)+(31*month3);
        }
        
        days=dyear+day1+day2+day3+d2;
        printf("%d days are there in between these two dates",days);
    }
}

}


