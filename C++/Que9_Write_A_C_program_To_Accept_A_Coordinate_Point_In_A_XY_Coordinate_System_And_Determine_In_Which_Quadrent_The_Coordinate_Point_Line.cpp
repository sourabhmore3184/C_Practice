#include<iostream>
using namespace std;
int main()
{
    int X=0,Y=0;

    cout<<"Enter The X And Y Co-ordinate :";
    cin>>X>>Y;

    if(X>0 && Y>0)
    {
        cout<<"The Co-ordinate Points ("<<X<<","<<Y<<") Lies In The First Quadrant."<<endl;
    }
    if(X<0 && Y>0)
    {
        cout<<"The Co-ordinate Points ("<<X<<","<<Y<<") Lies In The second Quadrant."<<endl;
    }
    if(X<0 && Y<0)
    {
        cout<<"The Co-ordinate Points ("<<X<<","<<Y<<") Lies In The Third Quadrant."<<endl;
    }
    if(X>0 && Y<0)
    {
        cout<<"The Co-ordinate Points ("<<X<<","<<Y<<") Lies In The Fourth Quadrant."<<endl;
    }

    if(X==0 && Y==0)
    {
        cout<<"The Co-ordinate Points ("<<X<<","<<Y<<") Lies On The Origin."<<endl;
    }
    if(X==0 && Y>0)
    {
        cout<<"The Co-ordinate Points ("<<X<<","<<Y<<") Lies On The Line Y"<<endl;
    }
    if(Y==0 && X>0)
    {
        cout<<"The Co-ordinate Points ("<<X<<","<<Y<<") Lies On The Line X"<<endl;
    }
}
