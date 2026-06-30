/*  School Management System
 *   Mugambi William
 *   BCS-03-0091/2025
 */

#include <iostream>
#include <string>

class Person {
  public:
    std::string  name;
    unsigned int age;

    void displayPerson()
    {
        std::cout << "Name: " << name << "\n";
        std::cout << "Age: " << age << "\n";
    }
};

class Student : public Person {
  public:
    std::string admNumber, studentClass;

    void displayStudent()
    {

        std::cout << "Adm Number: " << admNumber << "\n";
        std::cout << "Class: " << studentClass << "\n";
    }
};

int main()
{
    Student s;
    s.age          = 29;
    s.name         = "Juan";
    s.studentClass = "CS";
    s.admNumber    = "BCS-0057";
    s.displayPerson();
    s.displayStudent();
    return 0;
}
