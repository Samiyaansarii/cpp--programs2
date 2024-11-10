#include <iostream>
using namespace std;

class A;  // Forward declaration
class B;  // Forward declaration
class C;  // Forward declaration

// Friend function declaration (defined outside of any class)
void displayData(const A &a, const B &b, const C &c);

class A {
private:
    int privateA;

protected:
    int protectedA;

public:
    A(int pA, int prA) : privateA(pA), protectedA(prA) {}

    // Declare displayData as a friend of A
    friend void displayData(const A &a, const B &b, const C &c);
};

class B {
private:
    int privateB;

protected:
    int protectedB;

public:
    B(int pB, int prB) : privateB(pB), protectedB(prB) {}

    // Declare displayData as a friend of B
    friend void displayData(const A &a, const B &b, const C &c);
};

class C {
private:
    int privateC;

protected:
    int protectedC;

public:
    C(int pC, int prC) : privateC(pC), protectedC(prC) {}

    // Declare displayData as a friend of C
    friend void displayData(const A &a, const B &b, const C &c);
};

// Friend function definition
void displayData(const A &a, const B &b, const C &c) {
    cout << "Class A - Private: " << a.privateA << ", Protected: " << a.protectedA << endl;
    cout << "Class B - Private: " << b.privateB << ", Protected: " << b.protectedB << endl;
    cout << "Class C - Private: " << c.privateC << ", Protected: " << c.protectedC << endl;
}

int main() {
    // Creating objects of classes A, B, and C
    A objA(10, 20);
    B objB(30, 40);
    C objC(50, 60);

    // Calling the friend function to access and display data of A, B, and C
    displayData(objA, objB, objC);

    return 0;
}
