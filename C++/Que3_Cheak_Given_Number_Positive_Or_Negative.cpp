#include<iostream>
using namespace std;
int main()
{
    int num=0;

    cout<<"Enter Number ";
    cin>>num;

    if(num!=0)
    {
        if(num>0)
        {
            cout<<num<<" Is Positive Number"<<endl;
        }
        else
        {
            cout<<num<<" Is Negative Number"<<endl;
        }
    }
    else
    {
        cout<<num<<" Is Not Positive Or Negative"<<endl;
    }
}
