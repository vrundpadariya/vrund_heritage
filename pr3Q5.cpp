#include <iostream>
using namespace std;

class Number {
protected:
    float num;

public:
    Number(float n) : num(n) {}
};

class Square : public Number {
public:
    Square(int n) : Number(n) {}

    int calculateSquare() {
        return num * num;
    }
};

class Cube : public Number {
public:
    Cube(int n) : Number(n) {}

    int calculateCube() {
        return num * num * num;
    }
};

int main() {
    int inputNumber;

    cout << "Enter a number: ";
    cin >> inputNumber;

    Square squareObj(inputNumber);
    Cube cubeObj(inputNumber);

    cout << "Square of " << inputNumber << ": " << squareObj.calculateSquare() << std::endl;
    cout << "Cube of " << inputNumber << ": " << cubeObj.calculateCube() << std::endl;

    return 0;
}


