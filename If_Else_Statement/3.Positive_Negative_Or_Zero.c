#include<stdio.h>
int pos(int n)
{
    if(n==0)
    {
        return 0;
        //printf("Number Is Zero",n);
    }
    else if(n>0)
    {
        return 1;
        //printf("Number Is Positive",n);
    }
    else
    {
        return 2;
       // printf("Number is Negative",n);
    }
}
int main()
{
int n1,result;

printf("Enter Number  ");
scanf("%d",&n1);

  result=pos(n1);

if(result==0)
{
    printf("Number %d Is Zero",n1);
}
else if(result==1)
{
    printf("Number %d Is Positive",n1);
}
else
{
    printf("Number %d Is Negative",n1);
}
}
