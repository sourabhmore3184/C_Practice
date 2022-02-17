#include<iostream>
using namespace std;
int main()
{
    int Maths=0,Phy=0,Chem=0,total=0;

    cout<<endl<<"Input The Marks Obtained In Physics :";
    cin>>Phy;

    cout<<endl<<"Input The Marks Obtained In Chemistry :";
    cin>>Chem;

    cout<<endl<<"Input The Marks Obtained In Mathematics :";
    cin>>Maths;

    total=Phy + Chem + Maths;

    cout<<endl<<"Total Marks Of Physics,Chemistry And Mathematics :"<<total<<endl;
    cout<<endl<<"Total Of Maths And Physics :"<<Phy + Maths<<endl;

    if((Phy>=55 && Chem>=50 && Maths>=65) && total>=190 || Maths and Phy>=140)
    {
        cout<<endl<<"The Candidate Is Eligible For Admission"<<endl;
    }
    else
    {
        cout<<endl<<"The Candidates Is Not Eligible For Admission"<<endl;
    }

}
