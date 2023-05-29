#include<iostream>
#include<conio.h>
#include<ctype.h>
#include<iomanip>

using namespace std;

int main(){

char letter;
int Number;

cout<<"type any letter : ";
cin>>letter;

Number = islower(letter);

cout << Number<<endl;

return 0;
}