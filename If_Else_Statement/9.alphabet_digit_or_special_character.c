#include<stdio.h>
int alpha(ch)
{
    if(ch>='A' && ch<='Z' || ch>='a' && ch<='z')
    {
        return 0;
        //printf("Character Is Alphabet");
    }
    else if(ch>='0' && ch<='9')
    {
        return 1;
        //printf("Character Is Digit");
    }
    else
    {
        return 2;
        //printf("Character Is Special Character");
    }


}
int main()
{
    int result=0;
    char ch;
    printf("Enter Any Character  ");
    scanf("%c",&ch);

    result=alpha(ch);

    if(result==0)
    {
        printf("Character Is Alphabet");
    }
    else if(result==1)
    {
        printf("Character Is Digit");
    }
    else
    {
        printf("Character Is Special Character");
    }
}
