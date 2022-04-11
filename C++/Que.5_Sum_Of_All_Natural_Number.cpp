#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;

    cout<<"Enter The Number : ";
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        cout<<" "<<i<<endl;
        sum = sum + i;
    }
    cout<<"Sum = :"<<sum;

}
