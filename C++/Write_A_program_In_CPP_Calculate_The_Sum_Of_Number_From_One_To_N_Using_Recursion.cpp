#include<iostream>
using namespace std;
static sum=0;
int num(int p)
{
    if(p<=n)
    {
        sum = sum + p;
    }
    cout<<sum;
    return num();

}
int main()
{
    int n=0;

    cout<<"Enter The Number : ";
    cin>>n;
    num(p);
}
