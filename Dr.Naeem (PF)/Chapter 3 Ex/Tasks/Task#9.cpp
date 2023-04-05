#include<iostream>
using namespace std;

int main(){

int a; //no of guests
int b; // no chairs
int c; // placeholder for Varieble a
int factorial = 1;

cout<<"Type Any No of guest's : ";
cin>>a;
cout<<"Type Any No of chair's : ";
cin>>b;

if (a < b)
{cout<<"No of Guest's are Less then No of Chair's";}

else
{
c = a;
for (int i = 1; i <= b; i++)
{
    factorial = factorial * c;
    c--;
}
cout<<"The number of possible arrangements of "<<a<<" Guest's in "<<b<<" Chairs is "<<factorial;
}






return 0;
}