#include<iostream>
using namespace std;
int main()
{
    int sum=0;
    cout<<"Numbers Between 100 To 200 Divisible By 9 Is :  ";

    for(int i=100;i<=200;i++)
    {
        if(i%9==0)
        {
            cout<<" "<<i;
            sum = sum + i;
        }
    }
    cout<<endl<<"The Sum Is "<<sum;
}
