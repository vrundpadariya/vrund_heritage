#include <iostream>
uising namespace std;

class Shape {
protected:
    int width;
    int height;

public:
    Shape(int w, int h) : width(w), height(h) {}

    virtual int area() const = 0;  // Pure virtual function
};

class Triangle : public Shape {
public:
    Triangle(int base, int h) : Shape(base, h) {}

    int area() const override {
        return 0.5 * width * height;
    }
};

class Rectangle : public Shape {
public:
    Rectangle(int w, int h) : Shape(w, h) {}

    int area() const override {
        return width * height;
    }
};

int main() {
    Triangle triangle(5.0, 4.0);
    Rectangle rectangle(6.0, 3.0);

    std::cout << "Area of the triangle: " << triangle.area() << std::endl;
    std::cout << "Area of the rectangle: " << rectangle.area() << std::endl;

    return 0;
}

