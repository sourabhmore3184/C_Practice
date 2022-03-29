#include<iostream>
using namespace std;
class add
{
    public:

    int x,y;
    add()
    {
        x = 0;
        y = 0;
    }

    add(int a,int b)
    {
        x = a;
        y = b;
    }



    add(add &s)
    {
        x = s.x;
        y = s.y;
    }
    void display()
    {
        cout<<"Addition Is   =  "<<x+y<<endl;
    }

    ~add()
    {
        cout<<endl<<" Destructor Invoked ";
    }
};

int main()
{
    int x,y;

    cout<<"Enter Two Number : ";
    cin>>x>>y;

    add d(x,y);
    add d1(d);
    d.display();


}

