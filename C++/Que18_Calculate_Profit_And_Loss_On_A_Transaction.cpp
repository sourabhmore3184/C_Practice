#include<iostream>
using namespace std;
int main()
{
    int buy_price=0,sell_price=0,result=0;

    cout<<"Enter The Value";
    cin>>buy_price>>sell_price;

    if(sell_price>buy_price)
    {
     result=sell_price-buy_price;
     cout<<"You Can Booked Your Profit Amount "<<result<<endl;
    }


    else if(buy_price>sell_price)
    {
       result=buy_price-sell_price;
        cout<<"You Are Lossed Is "<<result<<endl;
    }

    return 0;

}
