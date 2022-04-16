#include<iostream>
using namespace std;
class demo
{
public:
    int a,b;
    demo(int x,int y)
    {
        a = x;
        b = y;
    }

    demo(demo &d1)
    {
        a = d1.a;
        b = d1.b;
    }

    void display()
    {
        cout<<"A = "<<a<<endl;
        cout<<"B = "<<b<<endl;
    }
};

int main()
{
    int p,q;

    cout<<"Enter The Value : ";
    cin>>p>>q;

    demo d1(p,q);
    d1.display();

    demo d2(d1);
    d2.display();
}
