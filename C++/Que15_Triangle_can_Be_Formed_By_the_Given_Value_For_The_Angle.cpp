#include<iostream>
using namespace std;
int main()
{
    int n1=0,n2=0,n3=0,sum=0;


    cout<<"Enter Value Of Triangle : ";
    cin>>n1>>n2>>n3;

    sum=n1 + n2 + n3;

    if(sum==180)
    {
        cout<<"Triangle Is Valid";
    }
    else
    {
        cout<<"Triangle Is Not valid";
    }
}
