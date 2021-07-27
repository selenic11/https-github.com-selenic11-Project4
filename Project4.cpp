// Project4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Vector {
public:
    Vector() : x(0), y(0), z(0)
    {}

    Vector(double a, double b, double c) {
        x = a;
        y = b;
        z = c;
    }
private:
    double x;
    double y;
    double z;
public:
    void Print() {
        cout << x << " " << y << " " << z;
    }
};

int main()
{
    Vector vect, vect2(3, 3, 3);
    vect.Print();
    cout << "\n";
    vect2.Print();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
