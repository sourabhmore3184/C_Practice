#include<iostream>
using namespace std;
int main()
{
    int c_id=0,unit=0,s_charge=0;
    char c_name[20];
    float total=0;

    cout<<"Enter the Customer ID : ";
    cin>>c_id;

    cout<<endl<<"Enter The Customer Name : ";
    cin>>c_name;

     cout<<endl<<"Enter Your Unit : ";
     cin>>unit;

     if(unit<=199)
     {
         total=unit * 1.20;
     }
     else if(unit>=200 && unit<400)
     {
         total=unit * 1.50;
     }
     else if(unit>=400 && unit<600)
     {
         total=unit * 1.80;
     }
     else if(unit>=600)
     {
         total=unit * 2;
     }

     cout<<endl<<"Customer ID Is  "<<c_id<<endl<<"Customer Name Is  "<<c_name<<endl<<"your Unit Is  "<<unit<<endl<<"Total Amount Is "<<total;

     if(total>400)
     {
         s_charge=total * 0.15;
         total+=s_charge;
     }
     cout<<endl<<"Super Charge Is  "<<s_charge<<endl<<"Net Amount Paid By The Customer "<<total;

}
