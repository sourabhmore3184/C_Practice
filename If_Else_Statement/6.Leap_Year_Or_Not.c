#include<stdio.h>
int leapyear(int n)
{
    if(n%400==0)
    {
        return 0;
        //printf("Leap Year ");
    }

    else if(n%100==0)
    {
        return 1;
        //printf("Not Leap Year");
    }
     else if(n%4==0)
    {
        return 2;
        //printf(" Leap Year");
    }
    else
    {
        return 3;
        printf("Not Leap Year");
    }


}

int main()
{
    int n1=0,result=0;

    printf("Enter Year Name ");
    scanf("%d",&n1);

    result=leapyear(n1);

    if(result==0)
    {
        printf("Leap Year");
    }
    else if(result==1)
    {
        printf("Not Leap Year");
    }
    else if(result==2)
    {
        printf("Leap Year");
    }
    else
        printf("Not Leap Year");
}
