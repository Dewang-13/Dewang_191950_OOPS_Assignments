/* EXPERIMENT - 48
AIM - WAP to create an abstract class named Shape that contains an empty method numberOfSides(). Provide three classes named Trapezoid, Triangle and Hexagon such that each one of the classes inherits the class shape. Each one the classes contains only the method numberOfSides() that shows the number of sides in the given geometrical figures. */

#include <iostream>

using namespace std;

class Shape
{
public:
    virtual void numberOfSides() = 0;
};
class trapezoid : public Shape
{
public:
    void numberOfSides() { cout << "No of sides in trapezoid is 4\n"; }
};
class triangle : public Shape
{
public:
    void numberOfSides() { cout << "No of sides in the triangle is 3\n"; }
};
class hexagon : public Shape
{
public:
    void numberOfSides() { cout << "No of sides in hexagon is 6\n"; }
};
int main()
{
    trapezoid tr;
    triangle tri;
    hexagon hex;

    tr.numberOfSides();
    tri.numberOfSides();
    hex.numberOfSides();

    return 0;
}