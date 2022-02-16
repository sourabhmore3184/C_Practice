#include<stdio.h>
int profit_loss( int buy_price,int sell_price)
{
    int result=0;
    if(sell_price>buy_price)
    {
     result=sell_price-buy_price;
     printf("You Are Profit Is %d",result);
    }


    else if(buy_price>sell_price)
    {
       result=buy_price-sell_price;
        printf("You Are Lossed Is %d ",result);
    }

}

int main()
{
    int buy_price=0,sell_price=0,result=0;

    printf("Enter Value ");
    scanf("%d%d",&buy_price,&sell_price);

    result=profit_loss(buy_price,sell_price);

}
