/*
 Create a structure of type date that contains three members: the month, the day of the
month, and the year, all of type int. (Or use day-month-year order if you prefer.) Have
the user enter a date in the format 12/31/2001, store it in a variable of type struct date,
then retrieve the values from the variable and print them out in the same format.
*/

#include<iostream>
using namespace std;

struct data
{
    int day;
    int month;
    int year;
};

int main(){

data d1;
char slash;

    cin>>d1.day>>slash>>d1.month>>slash>>d1.year;
    cout<<d1.day<<"/"<<d1.month<<"/"<<d1.year;

return 0;
}