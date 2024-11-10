#include <iostream>
using namespace std;

class Number {
private:
    int a;

public:
    // Constructor to initialize 'a'
    Number(int val) : a(val) {}

    // Overload increment operator (++) as a member function
    void operator++() {
        a += 5;
    }

    // Overload decrement operator (--) as a member function
    void operator--() {
        a -= 1;
    }

    // Overload negation operator (-) as a member function
    void operator-() {
        a = -a;
    }

    // Friend function to overload increment operator (++) for Number
    friend void incrementBy5(Number &num);

    // Friend function to overload decrement operator (--) for Number
    friend void decrementBy1(Number &num);

    // Friend function to overload negation operator (-) for Number
    friend void negateValue(Number &num);

    // Function to display the value of 'a'
    void display() const {
        cout << "Value of a: " << a << endl;
    }
};

// Friend function definition to increment by 5
void incrementBy5(Number &num) {
    num.a += 5;
}

// Friend function definition to decrement by 1
void decrementBy1(Number &num) {
    num.a -= 1;
}

// Friend function definition to negate the value
void negateValue(Number &num) {
    num.a = -num.a;
}

int main() {
    Number num(10);

    cout << "Initial ";
    num.display();

    // Using member function overloads
    ++num;  // Increment by 5
    cout << "After incrementing by 5 (member function): ";
    num.display();

    --num;  // Decrement by 1
    cout << "After decrementing by 1 (member function): ";
    num.display();

    -num;  // Negate the value
    cout << "After negating (member function): ";
    num.display();

    // Using friend function overloads
    incrementBy5(num);
    cout << "After incrementing by 5 (friend function): ";
    num.display();

    decrementBy1(num);
    cout << "After decrementing by 1 (friend function): ";
    num.display();

    negateValue(num);
    cout << "After negating (friend function): ";
    num.display();

    return 0;
}
