#include<iostream>
//#include<conio.h>
//#include<iomanip>
//#include<ctype.h>
using namespace std;

int main()
{
/*
long numC;
cin>>numC;
for (int j = 1; j <= 30; j++)
{
    cout<< setw(5) << j*numC<<" ";
    if (j % 10 == 0)
    cout<<endl;
}
*/
/*
int a;
for (a = 1; a <= 100; ++a)
{
    cout<<setw(5)<<a<<endl;
}
*/


int sum = 0;
for (int x = 1; x <= 20; x++)               //IT start from 1 and than it end at 16
{
    cout<<x<<" "; 

    sum=sum+x;

    if (x%4==0)
    {
    cout<<sum<<endl;
    sum = 0;
    }
}



return 0;
}