#include<iostream>
using namespace std;
class demo
{
    public:
        demo()
        {
            cout<<"Default Constructor"<<endl;
        }
        demo(int a)
        {
            cout<<"Parameterized Constructor"<<endl;
        }
        ~demo()
        {
            cout<<"Destructor"<<endl;
        }
};

int main()
{
    demo d;
    demo d1(2);
}
