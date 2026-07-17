/* Shape Drawing System (polymorphism)
 * Mugambi William
 * BCS-03-0091/2025
 */

#include <iostream>

class Shape {
  public:
    void virtual draw() { std::cout << "Drawing Shape\n"; }
};

class Triangle : Shape {
  public:
    void draw() { std::cout << "Drawing Triangle\n"; }
};

class Rectangle : Shape {
  public:
    void draw() { std::cout << "Drawing Rectangle\n"; }
};

class Circle : Shape {
  public:
    void draw() { std::cout << "Drawing Circle\n"; }
};

int main()
{
    Shape s;
    s.draw();
    Triangle t;
    t.draw();
    Circle c;
    c.draw();
    Rectangle r;
    r.draw();
    return 0;
}
