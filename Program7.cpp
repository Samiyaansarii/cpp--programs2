#include <iostream>
using namespace std;

class Base {
public:
    // Virtual function to find the sum of three numbers in the base class
    virtual int sum(int a, int b, int c) {
        return a + b + c;
    }
};

class Derived : public Base {
public:
    // Overridden function to find the sum of three numbers in the derived class
    int sum(int a, int b, int c) override {
        return a + b + c + 10;  // Adding an extra 10 for demonstration
    }
};

int main() {
    Base baseObj;
    Derived derivedObj;

    // Pointer of Base class pointing to Derived class object
    Base *basePtr = &derivedObj;

    // Displaying sum using the base class object
    cout << "Sum using base class object: " << baseObj.sum(10, 20, 30) << endl;

    // Displaying sum using the derived class object
    cout << "Sum using derived class object: " << derivedObj.sum(10, 20, 30) << endl;

    // Displaying sum of derived class (overridden function) using base class pointer to derived object
    cout << "Sum using base class pointer to derived object: " << basePtr->sum(10, 20, 30) << endl;

    return 0;
}
