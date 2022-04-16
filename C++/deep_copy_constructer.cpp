#include<iostream>
using namespace std;
class demo
{
public:
    int a;
    int b;
    int *p;

    demo()
    {
        p = new int;
    }

    demo(demo & x)
    {
        a = x.a;
        b = x.b;
        p = new int;
        *(this->p) = *(x.p);
    }

    void setdata(int i,int j,int k)
    {
       this->a = i;
       this->b = j;
        *p = k;
    }

    void display()
    {

            cout<<"Value Of A Is : "<<a<<endl;
            cout<<"Value Of B Is : "<<b<<endl;
            cout<<"Value Of *P Is : "<<*p<<endl;
    }
};

int main()
{
    demo d1;
    d1.setdata(2,3,4);
    demo d2(d1);

    *(d1.p) = 47;

    d1.display();

    d2.display();
}
