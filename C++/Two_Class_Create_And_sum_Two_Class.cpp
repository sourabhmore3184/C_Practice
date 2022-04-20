#include<iostream>
using namespace std;
class demo2;
class demo1
{
private:
    int i;
public:
    void accept(int x)
    {
        i = x;
    }
    friend void add(demo1,demo2);
};
class demo2
{
private:
    int j;
public:
    void accept(int y)
    {
        j = y;
    }
    friend void add(demo1,demo2);
};
void add(demo1 s1,demo2 s2)
{
    int sum = 0;
    sum = s1.i + s2.j;
    cout<<sum;
}
int main()
{
    demo1 s1;
    s1.accept(5);
    demo2 s2;
    s2.accept(7);
    add(s1,s2);
}
