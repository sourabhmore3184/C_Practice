#include<iostream>
using namespace std;

int main()
{
    int num=4;

    for(int i=3;i>=0;i--)
    {
        for(int j=3-i;j>=0;j--)
        {
            cout<<"  ";
        }
        for(int k=0;k<=2*i;k++)
        {
                if(k%2==0)
                {
                    cout<<" 1 ";
                }
                else
                {
                    cout<<"0";
                }
        }
        cout<<"\n";
    }
}

