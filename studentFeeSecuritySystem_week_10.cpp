/* Student Fee Security System (encapsulation)
 * Mugambi William
 * BCS-03-0091/2025
 */

#include <iostream>
#include <string>

class Student {
  private:
    std::string name, admNo;
    float       feeBalance;

  public:
    void inputStudentData(std::string name__, std::string admNo__, float feeBalance__)
    {
        name       = name__;
        admNo      = admNo__;
        feeBalance = feeBalance__;
    }

    void makePayment(float x) { feeBalance -= x; }

    void displayStatus()
    {
        std::cout << "Name: " << name << "\n";
        std::cout << "Adm Number: " << admNo << "\n";
        std::cout << "Fee Balance: " << feeBalance << "\n";
    }
};

int main()
{

    Student s;
    s.inputStudentData("Juan", "BCS89", 4700.0);
    s.makePayment(500.0);
    s.displayStatus();

    return 0;
}
