#include<iostream>
using namespace std;
int main()
{
    int n=0,rem=0,rev=0,temp=0;

    cout<<"Enter The Number : ";
    cin>>n;

    temp = n;

    while(temp!=0)
    {
        rem = temp % 10;
        rev = (rev * 10) + rem;
        temp = temp / 10;
    }
    if(n==rev)
    {
        cout<<n<<" Is A Palindrome Number ";
    }
    else
    {
        cout<<n<<" Is A Not Palindrome Number ";
    }

}
