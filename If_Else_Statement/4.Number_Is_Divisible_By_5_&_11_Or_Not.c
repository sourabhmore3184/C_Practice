#include<stdio.h>
int divisible(int n)
{
     if(n%5==0 && n%11==0)
    {
        return 0;
        //printf("%d Is Divisible By 5 And 11",n);
    }

     else if(n%11==0)
    {
        return 1;
        //printf("%d Is Divisible By 11",n);
    }

    else  if(n%5==0)
    {
        return 2;
        //printf("%d Is Divisible By 5 ",n);
    }
    else
    {
        return 3;
        //printf("%d Is Not Divisible By 5 And 11",n);
    }
}
int  main()
{
    int n1=0,result=0;

    printf("Enter Number  ");
    scanf("%d",&n1);

    result=divisible(n1);

   if(result==0)
   {
       printf("%d Is Divisible By 5 And 11",n1);
   }
   else if(result==1)
   {
       printf("%d Is Divisible By 11",n1);
   }
   else if(result==2)
   {
       printf("%d Is Divisible By 5",n1);
   }
   else
   {
       printf("%d Is Not Divisible BY 5 And 11",n1);
   }
}
