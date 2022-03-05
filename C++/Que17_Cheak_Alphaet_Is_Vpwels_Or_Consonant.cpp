#include<iostream>
using namespace std;
int main()
{
    char alpha;

    cout<<"Enter Any Alphabet :";
    cin>>alpha;

    if(alpha=='a' || alpha=='e' || alpha=='i' || alpha=='o' || alpha=='u' || alpha=='A' || alpha=='E' || alpha=='I' || alpha=='O' || alpha=='U')
    {
        cout<<"Enter Alphabet Is Vowels";
    }
    else
    {
        cout<<"Enter Alphabet Is Consonant";
    }
}

