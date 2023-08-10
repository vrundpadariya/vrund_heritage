#include <iostream>
using namespace std;

class Animal {
protected:
    string name;
    int age;

public:
    Animal(const string& animalName, int animalAge) : name(animalName), age(animalAge) {}

    void set_value(const string& newName, int newAge) {
        name = newName;
        age = newAge;
    }
};

class Zebra : public Animal {
public:
    Zebra(const string& zebraName, int zebraAge) : Animal(zebraName, zebraAge) {}

    void displayInfo() {
        cout << "Zebra: " << name << ", Age: " << age << endl;
        cout << "Extra Information: Zebra is native to Africa." << endl;
    }
};

class Dolphin : public Animal {
public:
    Dolphin(const string& dolphinName, int dolphinAge) : Animal(dolphinName, dolphinAge) {}

    void displayInfo() {
        cout << "Dolphin: " << name << ", Age: " << age << endl;
        cout << "Extra Information: Dolphins are marine mammals." << endl;
    }
};

int main() {
    Zebra zebra("abc", 5);
    Dolphin dolphin("xyz", 10);

    zebra.displayInfo();
    cout << endl;
    dolphin.displayInfo();

    return 0;
}

