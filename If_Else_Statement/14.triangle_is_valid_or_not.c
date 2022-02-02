#include<stdio.h>
int tri(int n1,int n2,int n3)
{
    int total=n1+n2+n3;
    if(total==180)
    {
        return 0;
        //printf("Triangle is Valid");
    }
    else
    {
        return 1;
        //printf("Triangle Is Not Valid");
    }

}

int main()
{
    int a=0,b=0,c=0,result=0;

    printf("Enter The Angle Of Triangle  ");
    scanf("%d%d%d",&a,&b,&c);

    result=tri(a,b,c);

    if(result==0)
    {
        printf("Triangle Is Valid ");
    }
    else
    {
        printf("Triangle Is Not Valid");
    }
}
