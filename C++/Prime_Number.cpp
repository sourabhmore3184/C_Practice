#include<iostream>
using namespace std;
int main()
{
    int n=0,cnt=0,cnt1=0;

    cout<<"Enter Any Number ";
    cin>>n;

    for(cnt=2;cnt<n;cnt++)
    {
        if(n % cnt == 0)
        {
            cnt1++;
            //break;
        }
    }

    if(cnt1==1)
    {
        cout<<"Number Not Prime ";
    }
    else
    {
        cout<<"Number Is Prime ";
    }
}
