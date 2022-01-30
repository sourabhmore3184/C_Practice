#include<stdio.h>
int conso(char ch)
{
    if(ch>='A' && ch<='Z' || ch>='a' && ch<='z')
    {
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')

    {
        return 0;
        //printf("Character Is Vovel");
    }
    else
    {
        return 1;
        //printf("Character Is Consonant");
    }

    }
    else
    {
        return 2;
        //printf("Entered Character Is Not Vovel Or Consonant");
    }


}

int main()
{
    int result=0;
    char ch;

    printf("Enter Any Alphabet  ");
    scanf("%c",&ch);

   result= conso(ch);

   if(result==0)
   {
       printf("Character Is Vovel");

   }
   else if(result==1)
   {
       printf("Character Is Consonant");
   }
   else
   {
       printf("Entered Character Is Not Vovel Or Consonant");
   }



}
