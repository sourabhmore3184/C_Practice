#include<iostream>
using namespace std;
class A
{
    public:

        void fun()
        {
            cout<<"Am In A Fun "<<endl;
        }
};
class B:public A
{
    public:

    void gun()
    {
        cout<<"Am In B Gun "<<endl;
    }
};
int main()
{
    A a;
    a.fun();
//    a.gun();
    B b;
    b.gun();
    b.fun();
}
