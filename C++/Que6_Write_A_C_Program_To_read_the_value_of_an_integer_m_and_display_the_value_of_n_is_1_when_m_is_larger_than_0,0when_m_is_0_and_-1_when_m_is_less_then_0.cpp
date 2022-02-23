#include<iostream>
using namespace std;
int main()
{
    int M=0,N=0;

    cout<<"Enter The Value Of M Is :";
    cin>>M;

    if(M==0)
    {
        N=0;
    }
    else if(M>0)
    {
        N=1;
    }
    else
    {
        N=-1;
    }
    cout<<"The Value Of N Is:"<<N<<endl;
}

