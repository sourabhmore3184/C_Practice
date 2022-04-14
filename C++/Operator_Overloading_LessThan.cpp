#include<iostream>
using namespace std;
class Mod
{
    public:

    int a,b;

    void fun(int x,int y)

    {
        a = x;
        b = y;
    }
    void show()
    {
        cout<<endl<<"A =  "<<a<<endl<<"B =  "<<b<<endl;
    }

    Mod operator % (Mod D)
    {
        Mod temp;

        temp.a = a % D.a;
        temp.b = b % D.b;

        return temp;
    }
};

int main()
{
    Mod D1;
    Mod D2;
    Mod D3;

    D1.fun(50,14);
    D2.fun(20,13);

    D3 = D1 % D2;

    D3.show();

}
