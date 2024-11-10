#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int age;
    string department;
    string course;

public:
    // Constructor to initialize student details
    Student(string n, int a, string dept, string c) : name(n), age(a), department(dept), course(c) {}

    // Friend function declaration
    friend void displayStudentDetails(const Student &s);
};

// Friend function definition
void displayStudentDetails(const Student &s) {
    cout << "Student Details:" << endl;
    cout << "Name: " << s.name << endl;
    cout << "Age: " << s.age << endl;
    cout << "Department: " << s.department << endl;
    cout << "Course: " << s.course << endl;
}

int main() {
    // Creating a Student object
    Student student("John Doe", 20, "Computer Science", "Data Structures");

    // Calling the friend function to display details
    displayStudentDetails(student);

    return 0;
}
