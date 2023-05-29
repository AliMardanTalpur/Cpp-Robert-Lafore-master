#include<iostream>
#include<conio.h>
#include<iomanip>
#include<ctype.h>
using namespace std;

void retry(int a)
{
    double num1, num2, ans;
    char op;
    cout<<"Enter first number, operator, second number : ";
    cin>>num1>>op>>num2;
    switch (op)
    {
    case '+':
        ans = num1 + num2;
        break;
    case '-':
        ans = num1 - num2;
        break;
    case '*':
        ans = num1 * num2;
        break;
    case '/':
        ans = num1 / num2;
        break;
    default:
        cout<<"Invalid Operator";
        break;
    }
    cout<<"Answer = "<<ans<<endl;
    cout<<"Do another (y/n)? ";
    cin>>op;  
    if (op == 'y')
    {retry(0);}
    else
    {cout<<"Thank You";}

}

int main(){

cout<<"WELCOME TO THE CALCULATOR"<<endl;
retry(0);    
}