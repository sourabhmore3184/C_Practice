#include<iostream>
using namespace std;
int main()
{
    int num=0;

    cout<<"Enter Number " ;
    cin>>num;

    if(num%400==0)
    {
        cout<<num<<" Is Leap year"<<endl;
    }
    else if(num%100==0)
    {
        cout<<num<<" Is Not Leap year"<<endl;
    }
    else if(num%4==0)
    {
        cout<<num<<" Is Leap year"<<endl;
    }
    else
    {
        cout<<num<<" Is Not Leap year"<<endl;
    }

    return 0;

}
