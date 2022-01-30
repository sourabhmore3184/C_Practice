#include<stdio.h>
int character( char ch)
{
    if(ch>='A' && ch<='Z' || ch>='a' && ch<='z')
    {
        return 0;
        //printf("Character Is Alphabet",ch);
    }
    else
    {
        return 1;
        //Sprintf("Character Is Not Alphabet",ch);
    }

}
int main()
{
    int n;

char ch;

printf("Enter Any Character ");
scanf("%c",&ch);

n=character(ch);

if(n==0)
{
    printf("Character Is Alphabet");
}
else
{
    printf("Character Is Not Alphabet");
}




}
