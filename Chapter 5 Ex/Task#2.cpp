/*
Raising a number n to a power p is the same as multiplying n by itself p times. Write a
function called power() that takes a double value for n and an int value for p, and
returns the result as a double value. Use a default argument of 2 for p, so that if this
argument is omitted, the number n will be squared. Write a main() function that gets values from the user to test this function.
*/
#include<iostream>
using namespace std;

double power(double n, double p=2) {
    double result = 1;
    for (int i = 0; i < p; i++) {
        result *= n;
    }
    return result;
}

int main(){

double n;
double p;

cout<<"Type In the No : ";
cin>>n;
cout<<"Type In the Power : ";    
cin>>p;

    double result = power(n, p);
cout<<result;

return 0;
}