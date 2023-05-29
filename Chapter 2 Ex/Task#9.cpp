#include<iostream>
#include<conio.h>
#include<ctype.h>
#include<iomanip>

using namespace std;

int main(){


char sign;
int a, b, c, d, R1, R2;

cout<<"write your first fractional value"<<endl;
cin>>a>>sign>>b;

cout<<"write your second fractional value"<<endl;
cin>>c>>sign>>d;

R1 = (a*d) + (c*b);
R2 = c*d;

cout<<"your sum is : "<<R1<<"/"<<R2;

return 0;
}