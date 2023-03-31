#include <iostream>

class Shape {
public:
    virtual float area() = 0;
};

class Rectangle : public Shape {
private:
    float length;
    float width;

public:
    Rectangle(float l, float w) : length(l), width(w) {}

    float area() override {
        return length * width;
    }
};

class Circle : public Shape {
private:
    float radius;

public:
    Circle(float r) : radius(r) {}

    float area() override {
        return 3.14159 * radius * radius;
    }
};

class Square : public Shape {
private:
    float side;

public:
    Square(float s) : side(s) {}

    float area() override {
        return side * side;
    }
};

int main() {
    Rectangle rect(5, 10);
    Circle circle(7);
    Square square(6);

    std::cout << "Rectangle area: " << rect.area() << std::endl;
    std::cout << "Circle area: " << circle.area() << std::endl;
    std::cout << "Square area: " << square.area() << std::endl;

    return 0;
}
