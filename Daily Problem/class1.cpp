// create a base class shape and derived class circle , both with non-virtual function draw(). show that which function,
// compiler will call due to early binding in derived class...

#include <iostream>
using namespace std;

class Shape {
public:
    void draw() {
        cout << "Drawing Shape" << endl;
    }
};

class Circle : public Shape {
public:
    void draw() {
        cout << "Drawing Circle" << endl;
    }
};

int main() {

    Circle c;

    // Shape* ptr = &c;
    //                          // With Pointer
    // ptr->draw(); 

    c.draw();  // Without Pointer

    return 0;
}