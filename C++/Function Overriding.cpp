#include<iostream>
using namespace std;
class parent
{
    public:
    void mobile()
    {
        cout<<"Parent Mobile ";
    }
};

class child : public parent
{
    public:
    void mobile()
    {
        cout<<endl<<"Child Mobile ";
    }
};

int main()
{
    parent p;
    child ch;

    p.mobile();
    ch.mobile();
}
