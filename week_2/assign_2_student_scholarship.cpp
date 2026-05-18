#include <iostream>

int main()
{
    std::string studentName, scholarshipStatus;
    float       attendance;
    int         marks;

    std::cout << "Enter your Name: " << "\n";
    std::getline(std::cin, studentName);

    std::cout << "Enter your attendance(float), and marks: " << "\n";
    std::cin >> attendance >> marks;

    if (marks >= 70) {
        if (attendance >= 80) scholarshipStatus = "Full Scholarship";
        else scholarshipStatus = "Partial Scholarship";
    } else if (marks >= 50) {
        if (attendance >= 85) scholarshipStatus = "Partial Scholarship";
        else scholarshipStatus = "No Scholarship";
    } else {
        scholarshipStatus = "No Scholarship";
    }

    std::cout << "Student Name: " << studentName << "\n";
    std::cout << "Scholarship Status: " << scholarshipStatus << "\n";

    return 0;
}
