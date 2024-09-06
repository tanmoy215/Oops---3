#include<bits/stdc++.h>
using namespace std;
class AbstractShape {
public:
    virtual void draw() = 0; // Pure virtual function
    void print() { cout << "Shape" << endl; }
};

class Circle : public AbstractShape {
public:
    void draw()  { cout << "Drawing a circle" << endl; }
};

int main() {
    // AbstractShape shape; // Error! Cannot instantiate abstract class
    Circle circle;
    circle.draw(); // Output: Drawing a circle
    circle.print(); // Output: Shape
    return 0;
}

