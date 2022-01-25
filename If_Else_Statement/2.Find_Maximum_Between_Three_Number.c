#include<stdio.h>
int maxthree(int a,int b,int c)
{
    if(a>b && a>c)
    {
        return  0;
        //printf("Number %d Is Maximum",a);
    }
    else if(b>a && b>c)
    {
        return 1;
        //printf("Number %d Is Maximum",b);
    }
    else
    {
        return 2;
        //printf("Number %d Is Maximum",c);
    }

}
int main()
{
    int n1=0,n2=0,n3=0,result=0;

    printf("Enter Any Three Number  ");
    scanf("%d%d%d",&n1,&n2,&n3);

    result=maxthree(n1,n2,n3);

    if(result==0)
    {
        printf("Number %d Is Maximum",n1);
    }
    else if(result==1)
    {
        printf("Number %d Is Maximum",n2);
    }
    else
    {
        printf("Number %d Is Maximum",n3);
    }
}
