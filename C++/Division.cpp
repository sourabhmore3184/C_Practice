#include<iostream>
using namespace std;
class div
{
    public:

    int p,q;

    void gun(int a,int b)
    {
        p = a;
        q = b;
    }
    void show()
    {
        cout<<endl<<"P =  "<<p<<endl<<"Q =  "<<q<<endl;
    }

    div operator / (div d)
    {
        div temp;

        temp.p = p / d.p;
        temp.q = q / d.q;

        return temp;
    }
};

int main()
{
    div d1;
    div d2;
    div d3;

    d1.gun(40,60);
    d2.gun(3,4);

    d3 = d1 / d2;

    d3.show();
}
