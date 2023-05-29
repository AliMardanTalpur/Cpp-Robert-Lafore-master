#include<iostream>
#include<conio.h>
#include<iomanip>
#include<ctype.h>
using namespace std;

int fact(int n)
    {
        int f = 1;
        for (int i = 1; i <= n; i++)
        {
            f = f * i;
        }
        return f;
    }  

int main(){

    int n;
    cout<<"Enter a number : ";
    cin>>n;
    cout<<"Factorial of "<<n<<" is : "<<fact(n);

    return 0;
}