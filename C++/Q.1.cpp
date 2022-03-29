#include<iostream>
using namespace std;
class Areas
{
public:
     float rad;
     float side;
     float Height,Base;
     int length,width;
     float Area;

     double area(double R)
     {
         rad=R;
         Area=(3.14)*rad*rad;
         cout<<"\n Area Of Circle Is = "<<Area;
     }
     void area(int S)
     {
         side=S;
         Area =(side*side);
         cout<<" \n Area Of Square Is = "<<Area;
     }
     double area(double H,double B)
     {
         Height=H;
         Base=B;
         Area=0.2*Height*Base;
         cout<<endl<<"Area Of Triangle Is = "<<Area;
     }
     void area(int L,int W)
     {
         length=L;
         width=W;

         Area = length * width;
         cout<<endl<<" Area Of Rectangle "<<Area;
     }
};
int main()
{
    Areas A;
    A.area(2.5);
    A.area(5);
    A.area(5.9,1.2);
    A.area(5,5);
     return 0;
}
