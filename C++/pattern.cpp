#include<iostream>
using namespace std;
int main()
{
    for(int i=0;i<=4;i++)
    {
        for(int j=0;j<=4;j++)
        {
            if(i>j)
            {
                cout<<" *";
            }
            else
            {
                cout<<"  ";
            }
        }
        cout<<"\n";
    }
    for(int i=5;i>=0;i--)
    {
        for(int j=4;j>=0;j--)
        {
            if(j+i>4)
            {
                cout<<" *";
            }
            else
            {
                cout<<"  ";
            }
        }
        cout<<"\n";
    }
}
