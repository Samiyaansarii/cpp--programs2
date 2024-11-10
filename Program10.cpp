#include <iostream>
using namespace std;

// Function template to calculate the sum of two numbers
template <typename T>
T sum(T a, T b) {
    return a + b;
}

// Function template to calculate the sum of three numbers
template <typename T>
T sum(T a, T b, T c) {
    return a + b + c;
}

int main() {
    int int1 = 5, int2 = 10, int3 = 15;
    double double1 = 2.5, double2 = 3.5, double3 = 4.5;

    // Using template function to find the sum of two integers
    cout << "Sum of two integers: " << sum(int1, int2) << endl;

    // Using template function to find the sum of three integers
    cout << "Sum of three integers: " << sum(int1, int2, int3) << endl;

    // Using template function to find the sum of two doubles
    cout << "Sum of two doubles: " << sum(double1, double2) << endl;

    // Using template function to find the sum of three doubles
    cout << "Sum of three doubles: " << sum(double1, double2, double3) << endl;

    return 0;
}
