/*
 Create a structure called Volume that uses three variables of type Distance (from the
ENGLSTRC example) to model the volume of a room. Initialize a variable of type Volume
to specific dimensions, then calculate the volume it represents, and print out the result.
To calculate the volume, convert each dimension from a Distance variable to a variable
of type float representing feet and fractions of a foot, and then multiply the resulting
three numbers.
*/
#include <iostream>
using namespace std;

// Define the Distance structure
struct Distance {
    int feet;
    float inches;
};

// Define the Volume structure using three Distance variables
struct Volume {
    Distance length;
    Distance width;
    Distance height;
};

int main() {
    // Initialize a variable of type Volume with specific dimensions
    Volume room = {
        {10, 6.5}, // length
        {8, 3.25}, // width
        {12, 0.75} // height
    };

    // Calculate the volume by converting each dimension to feet and fractions of a foot, then multiplying
    float length_ft = room.length.feet + room.length.inches/12.0;
    float width_ft = room.width.feet + room.width.inches/12.0;
    float height_ft = room.height.feet + room.height.inches/12.0;
    float volume = length_ft * width_ft * height_ft;

    // Print out the result
    cout << "The volume of the room is: " << volume << " cubic feet." << endl;

    return 0;
}
