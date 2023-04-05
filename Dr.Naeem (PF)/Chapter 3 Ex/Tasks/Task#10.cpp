#include<iostream>
using namespace std;

int main(){

float I_amount,F_amount,I_rate_per_year;
int year = 0;

cout<<"Inital Amount : ";
cin>>I_amount;
cout<<"Final Amount : ";
cin>>F_amount;
cout<<"Intrest Rate : ";
cin>>I_rate_per_year;
I_rate_per_year = I_rate_per_year/100;

 while (F_amount>=I_amount)
{
    I_amount = I_amount + (I_amount * I_rate_per_year);
    year++;
}
   cout<<"It will take "<<year<<" Years";

    return 0;
}