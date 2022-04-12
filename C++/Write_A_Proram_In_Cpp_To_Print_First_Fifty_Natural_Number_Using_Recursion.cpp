#include<iostream>
using namespace std;

int Natural(int n)
{
    if(n<=50)
    {
        cout<<n<<" \t";
        return Natural(n+1);
    }
}
int main()
{
    int ans = 0, n = 0;

    cout<<"First 50 Natural Numbers Are : "<<endl;

    Natural(n);
}
