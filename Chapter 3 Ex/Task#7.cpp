#include<iostream>
using namespace std;

int main(){
    
float I_amount,years,I_rate_per_year,total; // I_amount = initial amount, I_rate_per_year = initial rate per year 

cout<<"Type in your Initail Amount"<<endl;
cin>>I_amount;
cout<<"No of years"<<endl;
cin>>years;
cout<<"intial interst rate per year"<<endl;
cin>>I_rate_per_year;

for(float i = 1; i<= years; i++)
{
    total = I_amount + (I_amount * I_rate_per_year / 100);
    I_amount = total;
}

 cout<<"At the end of "<<years<<" years, you will have "<<total<<" dollars.";

return 0;
}