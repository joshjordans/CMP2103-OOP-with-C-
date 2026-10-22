
#include <iostream>
#include <string>
using namespace std;

// The first class contains basic information about a person.
class Person {
protected:
    string name;
    int age;

public:
    Person(string personName, int personAge) {
        name = personName;
        age = personAge;
    }

    void displayPerson() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Student inherits the information from Person.
class Student : public Person {
protected:
    string studentId;

public:
    Student(string personName, int personAge, string id)
        : Person(personName, personAge) {
        studentId = id;
    }

    void displayStudent() {
        displayPerson();  // Inherited function
        cout << "Student ID: " << studentId << endl;
    }
};

// This class inherits from Student, forming an inheritance chain.
class BiomedicalEngineeringStudent : public Student {
private:
    string specialization;

public:
    BiomedicalEngineeringStudent(string personName, int personAge,
                                 string id, string field)
        : Student(personName, personAge, id) {
        specialization = field;
    }

    void displayDetails() {
        displayStudent();  // Uses inherited student information
        cout << "Specialization: " << specialization << endl;
    }
};

int main() {
    // Creating an object of the final derived class.
    BiomedicalEngineeringStudent student(
        "Joshua", 21, "BME001", "Medical Instrumentation"
    );

    cout << "STUDENT INFORMATION" << endl;
    cout << "-------------------" << endl;

    // Calling a function defined in the final derived class.
    student.displayDetails();

    return 0;
}
