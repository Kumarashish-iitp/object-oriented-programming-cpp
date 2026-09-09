// Question:
// Create a Student class with name, standard, roll number and marks.
// Create an object and display the student's details.

#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    int standard;
    int rollNumber;
    double marks;

    void display(){
        cout << "Student name : " << name << endl;
        cout << "Standard : " << standard << endl;
        cout << "Roll Number : " << rollNumber << endl;
        cout << "Marks : " << marks <<" Percent" << endl;
    }
};

int main(){
    Student s1;
    s1.name = "Kumar Ashish";
    s1.standard = 12;
    s1.rollNumber = 02;
    s1.marks = 82.5;

    s1.display();

    return 0;
}
