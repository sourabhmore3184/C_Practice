#include<iostream>
using namespace std;
int main()
{
    char ch;

    cout<<"Enter The Character : ";
    cin>>ch;

    if(ch>='A' && ch<='Z' || ch>='a' && ch<='z')
    {
        cout<<"Character Is Alphabet";
    }
    else if(ch>='0' && ch<='9')
    {
        cout<<"Character Is Digit";
    }
    else
    {
        cout<<"Character Is Special Symbol";
    }
    return 0;
}
