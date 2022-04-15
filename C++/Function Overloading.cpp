#include<iostream>
using namespace std;

    void add(int a,int b)
    {
        cout<<endl<<"Addition Is  =  "<<a + b;
    }

    void add(int a,int b,int c)
    {
        cout<<endl<<"Addition Is  =  "<<a + b + c;
    }

    void add(double a,int b,int c)
    {
        cout<<endl<<"Addition Is =  "<<a + b + c;
    }

    void add(double a,double b,double c)
    {
        cout<<endl<<"Addition Is =  "<<a + b +c;
    }


int main()
{
    int a,b;

    cout<<"Enter The Number ";
    cin>>a>>b;

    add(a,b);
    add(a,b,5);
    add(2.5,a,b);
    add(2.5,3.6,4.7);
}
