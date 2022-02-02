#include<stdio.h>
int notes(int amt)
{
  int n2000,n500,n200,n100,n50,n20,n10,n5,n2,n1;

  if(amt>=2000)
  {
      n2000=amt/2000;
      amt= amt-n2000*2000;
      printf("Notes Of 2000 =%d \n",n2000);
  }
  if(amt>=500)
  {
      n500=amt/500;
      amt=amt-n500*500;
      printf("Notes Of 500 =%d \n",n500);
  }
  if(amt>=200)
  {
      n200=amt/200;
      amt=amt-n200*200;
      printf("Notes Of 200 =%d \n",n200);
  }
  if(amt>=100)
  {
      n100=amt/100;
      amt=amt-n100*100;
      printf("Notes Of 100 =%d \n",n100);
  }
  if(amt>=50)
  {
      n50=amt/50;
      amt=amt-n50*50;
      printf("Notes Of 50 =%d \n",n50);
  }
  if(amt>=20)
  {
      n20=amt/20;
      amt=amt-n20*20;
      printf("Notes Of 20 =%d \n",n20);
  }
  if(amt>=10)
  {
      n10=amt/10;
      amt=amt-n10*10;
      printf("Notes Of 10 =%d \n",n10);
  }
  if(amt>=5)
  {
      n5=amt/5;
      amt=amt-n5*5;
      printf("Notes Of 5 =%d \n",n5);
  }
  if(amt>=2)
  {
      n2=amt/2;
      amt=amt-n2*2;
      printf("Notes Of 2 =%d \n",n2);
  }
  if(amt>=1)
  {
    n1=amt/1;
    amt=amt-n1*1;
    printf("Notes Of 1 =%d \n",n1);
  }
}

int main()
{
    int n=0,amount=0,result=0;

    printf("Enter Amount  ");
    scanf("%d",&amount);

    notes(amount);


}
