#include<iostream>
using namespace std;
int main()
{
    char grade=0;

    cout<<"input The Grade ";
    cin>>grade;

    if(grade=='E')
    {
        cout<<"You Have Chosen : EXCELLENT";
    }
    else if(grade=='V')
    {
        cout<<"You Have Chosen : VERY GOOD";
    }
    else if(grade=='G')
    {
        cout<<"You Have Chosen : GOOD";
    }
    else if(grade=='A')
    {
        cout<<"You Have Chosen : AVERAGE";
    }
    else if(grade=='F')
    {
        cout<<"You Have Chosen : FAIL";
    }
    return 0;
}
