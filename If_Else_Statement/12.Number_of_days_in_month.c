#include<stdio.h>
int days(int num)
{
 if(num>=1 && num<=12)
 {
    if(num==1 || num==3 || num==5 || num==7 || num==8 || num==10 || num==12)
     {
         return 0;
        // printf("Month  In 31 Days");
     }
    else if(num==4 || num==6 || num==9 || num==11)
     {
         return 1;
         //printf("Month In 30 Days ");
     }
    else if(num==2)
     {
         return 2;
         //printf("Month In 28 Days");
     }
}
     else
     {
         return 3;
        // printf("Enter Invalid Month");
     }

}
int main()
{
    int n=0,result=0;

    printf("Enter Month Number  ");
    scanf("%d",&n);

   result= days(n);

   if(result==0)
   {
       printf("Month In 31 Days");
   }
   else if(result==1)
   {
       printf("Month In 30 Days");
   }
   else if(result==2)
   {
       printf("Month In 28 Days");
   }
   else
   {
       printf("Enter Invalid Month ");
   }


}
