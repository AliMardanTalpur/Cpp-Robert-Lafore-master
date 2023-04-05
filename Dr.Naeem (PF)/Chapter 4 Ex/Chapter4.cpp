/*
 phone number, such as (212) 767-8900, can be thought of as having three parts: the
area code (212), the exchange (767), and the number (8900). Write a program that uses a
structure to store these three parts of a phone number separately. Call the structure
phone. Create two structure variables of type phone. Initialize one, and have the user
input a number for the other one. Then display both numbers. The interchange might
look like this:
Enter your area code, exchange, and number: 415 555 1212
My number is (212) 767-8900
Your number is (415) 555-1212
*/
    /*
#include<iostream>
#include<iomanip>
using namespace std;

struct phone 
{
    int area_code;
    int exchange;
    int number;
};


int main(){
    phone p1 = {212,767,8900};
    phone p2;
    cout<<"Type In Your No : ";
    cin>>p2.area_code>>p2.exchange>>p2.number;
    cout<<setw(3)<<setfill('0')<<p2.area_code<<setw(3)<<setfill('0')<<" "<<p2.exchange<<setw(3)<<setfill('0')<<" "<<p2.number<<" ";
    cout<<p1.area_code<<" "<<p1.exchange<<" "<<p1.number<<" ";



return 0;
}
    */

#include <iostream>
#include <iomanip>

using namespace std;

// Define a struct to represent a phone number
struct phone {
    int area_code;
    int exchange;
    int number;
};

int main() {
    // Initialize one phone number
    phone my_number = {212, 767, 8900};

    // Get input for another phone number
    phone your_number;
    cout << "Enter your area code, exchange, and number: ";
    cin >> your_number.area_code >> your_number.exchange >> your_number.number;

    // Display both phone numbers
    cout << "My number is (" << setw(3) << setfill('0') << my_number.area_code << ") "
         << setw(3) << setfill('0') << my_number.exchange << "-"
         << setw(4) << setfill('0') << my_number.number << endl;
    cout << "Your number is (" << setw(3) << setfill('0') << your_number.area_code << ") "
         << setw(3) << setfill('0') << your_number.exchange << "-"
         << setw(4) << setfill('0') << your_number.number << endl;

    return 0;
}
