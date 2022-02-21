#include<iostream>
using namespace std;
int main()
{
    int num=0,age=0;

    cout<<"Enter Age ";
    cin>>age;

    if(age>0)
    {
        if(age<120)
        {
          if(age>=18)
        {
            cout<<" You Are Eligible For casting Your Vote."<<endl;
        }
        else
        {
            cout<<" You Are Not  Eligible For casting Your Vote."<<endl;
        }
        }
        else
        {
            cout<<"Invalid Age";
        }

    }

    else
    {
        cout<<"--You Are Not Eligible For casting Your Vote."<<endl;
    }

}
