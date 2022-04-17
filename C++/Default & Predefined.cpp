#include<iostream>
using namespace std;
class triangle
{
    float a,b,c;
    public:
    triangle(int x,int y,int z)
    {
        a=x;
        b=y;
        c=z;
    }
    void perameter()
    {
        float perameter;
        perameter = a + b + c;

        cout<<"Perameter Is : "<<perameter;
    }

    void area()
    {
        float area;

        area = 0.5 * a * b;

        cout<<endl<<"Area Is : "<<area<<endl;
    }
};

int main()
{
    triangle t(3,4,5);

    t.perameter();
    t.area();
}
