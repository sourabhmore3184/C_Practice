#include<stdio.h>
int triside(int a1,int a2, int a3)
{
    if(a1+a2>=a3 && a1+a3>=a2 && a2+a3>=a1)
    {
        return 0;
       // printf("Triangle Is Valid ");
    }
    else
    {
        return 1;
        //printf("Triangle Is Not Valid");
    }

}

int main()
{
    int side1=0,side2=0,side3=0,result=0;

    printf("Enter Side Of Triangle  ");
    scanf("%d%d%d",&side1,&side2,&side3);

    result=triside(side1,side2,side3);

    if(result==0)
    {
        printf("Triangle Is Valid");
    }
    else
    {
        printf("Triangle Is Not Valid");
    }
}
