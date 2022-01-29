#include<stdio.h>
int evenodd(int n)
{
    if(n%2==0)
    {
        return 0;
        //printf("Number Is Even ",n);
    }
    else
    {
        return 1;
        //printf("Number Is Odd",n);
    }

}

int main()
{
    int n=0,result=0;

    printf("Enter Any Number  ");
    scanf("%d",&n);

    result=evenodd(n);

    if(result==0)
    {
        printf("Number Is Even ",n);
    }
    else
    {
        printf("Number Is Odd ",n);
    }


}
