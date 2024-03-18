#include <iostream>
using namespace std;

class Student {
public:
    Student(string n, int r, string c) : name(n), rollNumber(r), standard(c) {}

    void displayinfo() {
        cout << "Student Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "standard: " << standard << endl;
    }

private:
    string name;
    int rollNumber;
    string standard;
};

int main() {
    Student student1("Achyut ", 305, "CSE 3rd sem");
    Student student2("Ankit ",  309, "CSE 3rd sem");
    Student student3("Anuskha", 315, "CSE 3rd sem");
    Student student4("Dheeraj", 327, "CSE 3rd sem");

    cout << "Student 1:" << endl;
    student1.displayinfo();

    cout << "\nStudent 2:" << endl;
    student2.displayinfo();

    cout << "\nStudent 3:" << endl;
    student3.displayinfo();

    cout << "\nStudent 4:" << endl;
    student4.displayinfo();

    return 0;
}