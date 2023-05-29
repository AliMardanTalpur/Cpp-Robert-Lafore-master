/*
 Refer to the CIRCAREA program in Chapter 2, “C++ Programming Basics.” Write a function called circarea() 
 that finds the area of a circle in a similar way. It should take an
argument of type float and return an argument of the same type. Write a main() function 
that gets a radius value from the user, calls circarea(), and displays the result
*/

#include <iostream> 
using namespace std;

void circarea(float num1)
{
    const float PI = 3.14159F; 
    float area = PI * num1 * num1; 
    cout << "Area is " << area << endl; 
}


int main()
{
    float rad; 

    cout<<"Enter radius of circle: ";
    cin>>rad;

    circarea(rad);

    return 0;
}