#include <iostream>
using namespace std;

class Number {
private:
    int value;

public:
    // Constructor to initialize 'value'
    Number(int val = 0) : value(val) {}

    // Overload + operator as a member function to find the sum
    Number operator+(const Number &other) const {
        return Number(value + other.value);
    }

    // Overload - operator as a member function to find the difference
    Number operator-(const Number &other) const {
        return Number(value - other.value);
    }

    // Friend function to overload + operator
    friend Number operator+(const Number &num1, const Number &num2);

    // Friend function to overload - operator
    friend Number operator-(const Number &num1, const Number &num2);

    // Function to display the value
    void display() const {
        cout << "Value: " << value << endl;
    }
};

// Friend function definition for + operator
Number operator+(const Number &num1, const Number &num2) {
    return Number(num1.value + num2.value);
}

// Friend function definition for - operator
Number operator-(const Number &num1, const Number &num2) {
    return Number(num1.value - num2.value);
}

int main() {
    Number num1(10), num2(5);

    // Using member function overloads
    Number sumMember = num1 + num2;      // Sum using member function
    Number diffMember = num1 - num2;     // Difference using member function

    cout << "Using member function overloads:" << endl;
    cout << "Sum: ";
    sumMember.display();
    cout << "Difference: ";
    diffMember.display();

    // Using friend function overloads
    Number sumFriend = operator+(num1, num2);    // Sum using friend function
    Number diffFriend = operator-(num1, num2);   // Difference using friend function

    cout << "\nUsing friend function overloads:" << endl;
    cout << "Sum: ";
    sumFriend.display();
    cout << "Difference: ";
    diffFriend.display();

    return 0;
}
