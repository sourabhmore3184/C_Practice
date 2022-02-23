#include<iostream>
using namespace std;
int main()
{
    int num=0,hgt=0;

    cout<<"Enter The Height ";
    cin>>hgt;

    if(hgt>=50)
    {
        if(hgt<=280)
        {
            if( hgt>50 && hgt<=135)
                {
                    cout<<"The Person Is Dwarf"<<endl;
                }
    else if( hgt>135 && hgt<=175)
        {
            cout<<"The Person Is Medium In The Height"<<endl;
        }
    else
        {
            cout<<"The Person Is Long In The Height"<<endl;
        }
         }
         else
         {
              cout<<"Invalid Height"<<endl;
         }

    }
    else
    {
        cout<<"Invalid Height"<<endl;
    }
}
