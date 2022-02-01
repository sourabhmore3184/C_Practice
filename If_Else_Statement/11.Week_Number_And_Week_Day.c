#include<stdio.h>
int weeknum(int num)
{
switch(num)
{

 case 1:
     printf("Sunday");
     break;

 case 2:
    printf("Monday");
    break;

 case 3:
    printf("Tuesday");
    break;

 case 4:
    printf("Wednesday");
    break;

 case 5:
    printf("Thursday");
    break;

 case 6:
    printf("Friday");
    break;

 case 7:
    printf("Saturday");
    break;

 default:
    printf("Invalid Week Number");


}



}
int main()
{
    int n=0,result=0;

    printf("Enter Any Number  ");
    scanf("%d",&n);

    result=weeknum(n);


}




