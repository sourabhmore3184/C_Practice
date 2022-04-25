#include<iostream>
using namespace std;
int main()
{

   cout<<endl<<" Even Numbers Are"<<endl;

    for(int i=1;i<=100;i++)
    {
        if(i%2==0)
        {
            cout<<"\t "<<i;
        }
    }
      cout<<endl<<"Odd Numbers Are"<<endl;

      for(int i=1;i<=100;i++)
    {
        if(i%2!=0)
        {
            cout<<"\t "<<i;
        }
    }
    return 0;
}
