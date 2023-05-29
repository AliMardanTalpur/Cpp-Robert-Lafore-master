#include<iostream>
using namespace std;

int main(){

double C;
double F;
double v;
cout<<"Write in the Temperature : ";
cin>>v;
C = (v - 32) * 5 / 9; //fahranite to celcius
F = (v * 1.8) + 32; //celcsius to fahranite
cout<< "Temp in Celsius is : "<< C <<endl<<"Temp in Fahranite is : "<<F;

return 0;
}    