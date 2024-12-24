#include <iostream>

using namespace std;

// Base class declaration
class bClass
{
public:
    // Member function to print the values of x and y
    void print() const;

    // Constructor with default values for x and y
    bClass(int a = 0, int b = 0);
    // Postcondition: x = a; y = b;

private:
    int x; // Variable to store the first integer
    int y; // Variable to store the second integer
};

// Derived class inheriting from bClass
class dClass : public bClass
{
public:
    // Member function to print values of x, y (from base class) and z (from derived class)
    void print() const;

    // Constructor with default values for x, y, and z
    dClass(int a = 0, int b = 0, int c = 0);
    // Postcondition: x = a; y = b; z = c;

private:
    int z; // Variable to store the third integer, specific to derived class
};

// Main function to demonstrate the functionality of bClass and dClass
int main()
{
    // Create an object of bClass with values 2 and 3
    bClass bObject(2, 3);

    // Create an object of dClass with values 3, 5, and 8
    dClass dObject(3, 5, 8);

    // Call print function of bClass
    bObject.print();
    cout << endl;

    // Call print function of dClass
    dObject.print();
    cout << endl;

    return 0;
}

// Definition of bClass print function
// Outputs the values of x and y
void bClass::print() const
{
    cout << x << " " << y << endl;
}

// Definition of bClass constructor
// Initializes x and y with given values
bClass::bClass(int a, int b)
{
    x = a;
    y = b;
}

// Definition of dClass print function
// Outputs the values of x and y (from base class) and z (from derived class)
void dClass::print() const
{
    bClass::print(); // Call the base class print function
    cout << " " << z << endl; // Output z value
}

// Definition of dClass constructor
// Initializes x and y using bClass constructor, and z with the given value
dClass::dClass(int a, int b, int c)
    : bClass(a, b) // Call the base class constructor
{
    z = c;
}
