#include<iostream>
using namespace std;
int main()
{
    int n1=0,n2=0,n3=0;

    cout<<"Enter The Three Number ";
    cin>>n1>>n2>>n3;

    if(n1>n2)
    {
        if(n1>n3)
        {
            cout<<"The 1st Number Is The Greatest Among Three"<<endl;
        }
    }
     if(n2>n1)
    {
        if(n2>n3)
        {
            cout<<"The 2nd Number Is The Greatest Among Three"<<endl;
        }
    }
    if(n3>n1)
    {
        if(n3>n2)
    {
        cout<<"The 3rd Number Is The Greatest Among Three"<<endl;
    }
    }
    return 0;
}
