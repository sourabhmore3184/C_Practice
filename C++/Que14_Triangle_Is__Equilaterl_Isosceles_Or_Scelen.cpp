#include<iostream>
using namespace std;
int main()
{
    int n1=0,n2=0,n3=0;

    cout<<"Enter Three Value Of Triangle :";
    cin>>n1>>n2>>n3;

    if(n1==n2 && n2==n3)
    {
        cout<<"Triangle Is Equilateral";
    }
    else if(n1==n2 || n1==n3 || n2==n3)
    {
        cout<<"Triangle Is Isosceles";
    }
    else
    {
        cout<<"Triangle Is Scalene";
    }
}
