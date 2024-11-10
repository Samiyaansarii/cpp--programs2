#include <iostream>
using namespace std;

class A;  
class B;  
class C;  

void displayData(const A &a, const B &b, const C &c);

class A {
private:
    int privateA;

protected:
    int protectedA;

public:
    A(int pA, int prA) : privateA(pA), protectedA(prA) {}

    friend void displayData(const A &a, const B &b, const C &c);
};

class B {
private:
    int privateB;

protected:
    int protectedB;

public:
    B(int pB, int prB) : privateB(pB), protectedB(prB) {}

    friend void displayData(const A &a, const B &b, const C &c);
};

class C {
private:
    int privateC;

protected:
    int protectedC;

public:
    C(int pC, int prC) : privateC(pC), protectedC(prC) {}
 
    friend void displayData(const A &a, const B &b, const C &c);
};

void displayData(const A &a, const B &b, const C &c) {
    cout << "Class A - Private: " << a.privateA << ", Protected: " << a.protectedA << endl;
    cout << "Class B - Private: " << b.privateB << ", Protected: " << b.protectedB << endl;
    cout << "Class C - Private: " << c.privateC << ", Protected: " << c.protectedC << endl;
}

int main() {
    
    A objA(10, 20);
    B objB(30, 40);
    C objC(50, 60);
    displayData(objA, objB, objC);

    return 0;
}
