#include <iostream>
#include <string>

class Human {
protected:
    std::string name;
    int age;
public:
    Human(std::string name, int age) : name(name), age(age) {}
    void introduce() {
        std::cout << "Hello, my name is " << name << " and I am " << age << " years old." << std::endl;
    }
};

class Student : public Human {
protected:
    std::string major;
    double gpa;
public:
    Student(std::string name, int age, std::string major, double gpa) : Human(name, age), major(major), gpa(gpa) {}
    void displayStudentInfo() {
        std::cout << name << " is a student majoring in " << major << " with a GPA of " << gpa << "." << std::endl;
    }
};

int main() {
    Student s("John", 20, "Computer Science", 3.8);
    s.introduce(); // inherited from Human class
    s.displayStudentInfo(); // inherited from Student class
    return 0;
}

