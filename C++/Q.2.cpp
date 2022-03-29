#include<iostream>
#include<fstream>>
using namespace std;

int main()
{
    string srg;
    char input[25];

    ofstream os;
    os.open("file2.txt");

    cout<<"Writing to text file:\n";
    cout<<"Enter The Class Name :  \n";

    cin.getline(input,25);
    os<<input<<endl;

    cout<<endl<<" Enter The Class Address"<<endl;
    cin>>input;
    os<<input<<endl;
    os.close();



    ifstream is("file2.txt");
   cout<<"\n Reading the text File:\n";
   if(is.is_open())
    {
        while(getline(is,srg))
        {
            cout<<srg<<endl;
        }
        is.close();
    }


    return 0;
}
