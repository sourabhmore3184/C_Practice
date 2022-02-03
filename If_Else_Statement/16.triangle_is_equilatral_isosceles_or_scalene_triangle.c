#include<stdio.h>
int equi(int a,int b,int c)
{
    if(a==b && a==c && b==a)
    {
        return 0;
        //printf("Triangle Is equilateral");
}
else if(a!=b && b!=c && a!=c )
{
    return 1;
    //printf("Triangle Is scalene");
}
    else
{
    return 2;
       // printf("Triangle Is Isosceles");
}
}

int main()
{
    int n1=0, n2=0,n3=0,result=0;

    printf("Enter Side Of Triangle ");
    scanf("%d%d%d",&n1,&n2,&n3);

    result=equi(n1,n2,n3);

     if (result==0)
     {
         printf("Triangle Is Equilateral");
     }
     else if(result==1)
     {
         printf("Triangle Is Scalene");
     }
     else

     {
         printf("Triangle Is Isosceles");
     }
}
