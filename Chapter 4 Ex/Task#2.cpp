/*
A point on the two-dimensional plane can be represented by two numbers: an x coordinate and a y coordinate. For example, 
(4,5) represents a point 4 units to the right of the
vertical axis, and 5 units up from the horizontal axis. The sum of two points can be
defined as a new point whose x coordinate is the sum of the x coordinates of the two
points, and whose y coordinate is the sum of the y coordinates.
Write a program that uses a structure called point to model a point. Define three points,
and have the user input values to two of them. Then set the third point equal to the sum
of the other two, and display the value of the new point. Interaction with the program
might look like this:
Enter coordinates for p1: 3 4
Enter coordinates for p2: 5 7
Coordinates of p1+p2 are: 8, 11
*/
#include<iostream>
using namespace std;

struct point_to_model_a_point
{
    int point1;
    int point2;
    int point3;
};


int main(){

point_to_model_a_point p1;
point_to_model_a_point p2;

cout<<"Enter coordinates for p1 : ";
cin>>p1.point1>>p2.point1;
cout<<"Enter coordinates for p2 : ";
cin>>p1.point2>>p2.point2;

p1.point3 = p1.point1+p1.point2;
p2.point3 = p2.point1+p2.point2;

cout<<"Coordinates of p1+p2 are : "<<p1.point3<<" "<<p2.point3;

return 0;
}