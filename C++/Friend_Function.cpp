#include<iostream>
using namespace std;
class demo
{
private:
    int i;
public:
    void accept(int x)
    {
        i = x;
    }
    void display()
    {
        cout<<i;
    }
    friend void add(demo);

};
void add(demo d)
{
    d.i+=5;
    cout<<"Added Value = "<<d.i<<endl;
}
int main()
{
    demo d;
    d.accept(5);
    d.display();
    add(d);
}
