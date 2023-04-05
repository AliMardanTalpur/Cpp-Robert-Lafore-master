#include<iostream>
#include<conio.h>
#include<ctype.h>
#include<iomanip>

using namespace std;

int main()
{

//----------------------------
// Task 1
//----------------------------

/*
double cubic_foot;
double gallons;
cout<<"Write no of gallons : ";
cin>>cubic_foot;
gallons = 7.481;
cubic_foot = gallons * cubic_foot;
cout<<cubic_foot;
*/

//----------------------------
// Task 2
//----------------------------

//cout<<"1990 \t 135"<<endl<<"1991 \t 7290"<<endl<<"1992 \t 11300"<<endl<<"1993 \t 16200";

//----------------------------
// Task 3
//----------------------------

/*
int i = 10;
cout<<i<<endl;
i *= 2;
cout<<i<<endl;
cout<<--i;
*/

//----------------------------
// Task 4
//----------------------------

//cout<<"Candy is dandy,\nBut liquor is quicker.";


//----------------------------
// Task 5
//----------------------------
/*
char letter;
int Number;
cout<<"type any letter : ";
cin>>letter;
Number = islower(letter);
cout << Number<<endl;
*/

//----------------------------
// Task 6 
//----------------------------

/*
double UD;
double BP = 1.487;
double FF = 0.172;
double GD = 0.584;
double JY = 0.00955;

cout<<"enter an amount of dollars : ";
cin>>UD;
cout<<"your US doller in BP Is : "<<BP * UD<<endl;
cout<<"your US doller in FF Is : "<<FF * UD<<endl;
cout<<"your US doller in GD Is : "<<GD * UD<<endl;
cout<<"your US doller in JY Is : "<<JY * UD;
*/
 
//----------------------------
// Task 7
//----------------------------
/*
double C;
double F;
double v;
cout<<"Write in the Temperature : ";
cin>>v;
C = (v - 32) * 5 / 9; //fahranite to celcius
F = (v * 1.8) + 32; //celcsius to fahranite
cout<< "Temp in Celsius is : "<< C <<endl<<"Temp in Fahranite is : "<<F;
*/

//----------------------------
// Task 8
//----------------------------

//    cout << "Port City" << setfill('.') << setw(10) << "2425785" << endl;

/*
setw() = it gives width to the given statement and if the given letters/no are less
then the given no of letters/no it adds SPACES" " on remaining empty area
--------------------------------------------------------
setfill() = it repalces the empty area left by the SPACES" " using setw. 
*/


//----------------------------
// Task 9
//----------------------------

/*
char sign;
int a, b, c, d, R1, R2;

cout<<"write your first fractional value"<<endl;
cin>>a>>sign>>b;

cout<<"write your second fractional value"<<endl;
cin>>c>>sign>>d;

R1 = (a*d) + (c*b);
R2 = c*d;

cout<<"your sum is : "<<R1<<"/"<<R2;
*/

return 0;
}