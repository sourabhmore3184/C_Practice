#include<iostream>
using namespace std;
int main()
{
    int temp=0;

    cout<<"Enter Temperature :";
    cin>>temp;

    if(temp<0)
    {
        cout<<"Freezing Whether";
    }
    else if(temp>=0 && temp<=10)
    {
        cout<<"Very Cold Whether";
    }
    else if(temp>=10 && temp<=20)
    {
        cout<<"Cold Whether";
    }
    else if(temp>=20 && temp<=30)
    {
        cout<<"Normal In Temp";
    }
    else if(temp>=30 && temp<=40)
    {
        cout<<"It's Hot";
    }
    else if(temp>=40)
    {
        cout<<"It's Very Hot";
    }
}
