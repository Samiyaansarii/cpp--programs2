#include <iostream>
using namespace std;

class Calculator {
public:
    // Function to sum two numbers
    int sum(int a, int b) {
        return a + b;
    }

    // Function to sum three numbers
    int sum(int a, int b, int c) {
        return a + b + c;
    }

    // Function to sum four numbers
    int sum(int a, int b, int c, int d) {
        return a + b + c + d;
    }
};

int main() {
    Calculator calc;

    int num1 = 5, num2 = 10, num3 = 15, num4 = 20;

    // Calling overloaded sum functions
    cout << "Sum of two numbers: " << calc.sum(num1, num2) << endl;
    cout << "Sum of three numbers: " << calc.sum(num1, num2, num3) << endl;
    cout << "Sum of four numbers: " << calc.sum(num1, num2, num3, num4) << endl;

    return 0;
}
