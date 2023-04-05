#include<iostream>
using namespace std;

int main(){

char answer;
do {
int pence1, pence2, penceTotal; // these veribles are for calculating
int pound, shilling, pence; // these veribles are for input

// Input first amount
cout << "Enter first amount : ";
cin >> pound>>shilling>>pence;
pence1 = (pound * 240) + (shilling * 12) + pence;

// Input second amount
cout << "Enter second amount : ";
cin >> pound>>shilling>>pence;
pence2 = (pound * 240) + (shilling * 12) + pence;

// Calculate total amount
penceTotal = pence1 + pence2;
pound = penceTotal / 240;
shilling = (penceTotal % 240) / 12;
pence = penceTotal % 12;

// Display total amount
cout <<"Total is "<<pound<<"."<<shilling<<"."<<pence<<endl;

// Ask if user wants to continue
cout << "Do you wish to continue (y/n)? ";
cin >> answer;
} while (answer == 'y');
cout<<"Exitiing...";




return 0;
}