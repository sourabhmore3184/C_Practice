#include<iostream>
using namespace std;
int main()
{
    int phy=0,chem=0,computerapp=0,roll_no=0,total=0;
    float per=0;
    char name[20],division;

    cout<<"Enter The Roll_no Number Of Student :";
    cin>>roll_no;

    cout<<"Enter The  Name Of Student :";
    cin>>name;

    cout<<"Enter The Marks Of Physics , Chemistry  And  Computer application : "<<endl;
    cin>>phy>>chem>>computerapp;

    total=phy + chem + computerapp;

    per=(float)(total/3);

    cout<<"Roll_no Of Student : "<<roll_no<<endl<<"Name Of Student : "<<name<<endl<<"Marks In Physics : "<<phy<<endl<<"Marks In Chemistry :"<<chem<<endl<<"Marks In Computer Application :" <<computerapp<<endl;

    cout<<"Total Marks = "<<total<<endl;

    cout<<"Percentage = "<<per<<endl;



    if(per>=80)
    {
       cout<<"division = First"<<endl;
    }
    else if(per>=55 && per<80)
    {
        cout<<"Division = Second"<<endl;
    }
    else if(per<55 && per>=35)
    {
        cout<<"Division = Third"<<endl;
    }
    else if(per<35 && per>=0)
    {
        cout<<"division = fail"<<endl;
    }



}
