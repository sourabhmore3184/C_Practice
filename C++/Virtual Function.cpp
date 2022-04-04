#include<iostream>
using namespace std;
class parent
{
public:

   virtual void mobile()
    {
        cout<<"Parent Mobile";
    }
};

class child : public parent
{
public:

    void mobile()
    {
        cout<<endl<<"Child Mobile";
    }
};

int main()
{
    parent *ptr;

    child co;

    ptr = &co;
    ptr->mobile();
}
