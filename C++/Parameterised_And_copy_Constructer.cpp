#include<iostream>
using namespace std;
class add
{
    public:
        int i,j;

        add()           //default constructer
        {
            i=0;
            j=0;
        }

        add(int a,int b)  //parameterised constructer
        {
            i = a;
            j = b;
        }
        add(add &s)     //copy constructer
        {
            i = s.i;
            j = s.j;
        }
        void display()
        {
            cout<<"Addition is : "<<i+j<<endl;
        }

};
int main()
{
    int i=0,j=0;

    cout<<"Enter Two Number : ";
    cin>>i>>j;

    add d(i,j);
    add d1(d);
    d.display();
}
