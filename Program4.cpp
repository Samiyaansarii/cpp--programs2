#include <iostream>
using namespace std;

class B;  // Forward declaration
class C;  // Forward declaration

class A {
private:
    int privateA;

protected:
    int protectedA;

public:
    A(int pA, int prA) : privateA(pA), protectedA(prA) {}

    // Declare FriendClass as a friend of A
    friend class FriendClass;
};

class B {
private:
    int privateB;

protected:
    int protectedB;

public:
    B(int pB, int prB) : privateB(pB), protectedB(prB) {}

    // Declare FriendClass as a friend of B
    friend class FriendClass;
};

class C {
private:
    int privateC;

protected:
    int protectedC;

public:
    C(int pC, int prC) : privateC(pC), protectedC(prC) {}

    // Declare FriendClass as a friend of C
    friend class FriendClass;
};

// Friend class that has access to all private and protected members of A, B, and C
class FriendClass {
public:
    void displayData(const A &a, const B &b, const C &c) {
        cout << "Class A - Private: " << a.privateA << ", Protected: " << a.protectedA << endl;
        cout << "Class B - Private: " << b.privateB << ", Protected: " << b.protectedB << endl;
        cout << "Class C - Private: " << c.privateC << ", Protected: " << c.protectedC << endl;
    }
};

int main() {
    // Creating objects of classes A, B, and C
    A objA(10, 20);
    B objB(30, 40);
    C objC(50, 60);

    // Creating an object of FriendClass
    FriendClass friendObj;

    // Accessing and displaying data of A, B, and C using FriendClass
    friendObj.displayData(objA, objB, objC);

    return 0;
}
