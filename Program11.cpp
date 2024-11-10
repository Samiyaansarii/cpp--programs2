#include <iostream>
#include <string>
using namespace std;

// Template for the Student class
template <typename T>
class Student {
private:
    T name;       // Student's name (can be string or any other type)
    int age;      // Student's age
    string course;   // Student's course
    string department;  // Student's department

public:
    // Constructor to initialize student data
    Student(T n, int a, string c, string d) : name(n), age(a), course(c), department(d) {}

    // Function to display student details
    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Course: " << course << endl;
        cout << "Department: " << department << endl;
    }
};

int main() {
    // Creating a student object with a string for the name
    Student<string> student1("Alice", 20, "Computer Science", "Engineering");
    cout << "Student 1 Details:" << endl;
    student1.display();
    
    cout << endl;

    // Creating another student object with a C-style string for the name
    Student<const char*> student2("Bob", 22, "Mechanical Engineering", "Engineering");
    cout << "Student 2 Details:" << endl;
    student2.display();

    return 0;
}
