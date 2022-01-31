#include<stdio.h>
int upper(char ch)
{
    if(ch>='A' && ch<='Z')
    {
        return 0;
        //printf("Character Is Uppercase Alphabet");
    }
    else if(ch>='a' && ch<='z')
    {
        return 1;
        //printf("Character Is Lowercase Alphabet");
    }
    else
    {
        return 2;
        //printf("Character Is Special Symbol Or Number");
    }

}

int main()
{
    int result;
    char ch;

    printf("Enter Any Character  ");
    scanf("%c",&ch);

    result=upper(ch);

    if(result==0)
    {
        printf("Character Is Upper Case Alphabet");
    }
    else if(result==1)
    {
        printf("Character Is Lowercase Alphabet");
    }
    else
    {
        printf("Character Is Special Symbol Or Number ");

    }
}
