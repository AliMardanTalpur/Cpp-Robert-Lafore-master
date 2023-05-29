#include<iostream>
using namespace std;

int main(){

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

return 0;
}