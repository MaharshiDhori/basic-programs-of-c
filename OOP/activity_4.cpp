#include<iostream>

using namespace std;

class Rectangle
{
    public:
        int length;
        int breadth;

        Rectangle(int n, int m)
        {
            length = n;
            breadth = m;
        }

        int area()
        {
            return length * breadth;
        }
};

int main()
{
    Rectangle demoRectangle(10, 20);
    cout << "The area of the rectangle is: " << demoRectangle.area();
    return 0;
}