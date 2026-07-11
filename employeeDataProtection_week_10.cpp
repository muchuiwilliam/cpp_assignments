/* Employee Data Protection system (encapsulation)
 * Mugambi William
 * BCS-03-0091/2025
 */

#include <iostream>
#include <string>

class Employee {
  private:
    std::string name, id;
    float       basicSalary;

  public:
    void setEmployeeDetails(std::string name__, std::string id__, float salary__)
    {
        name        = name__;
        basicSalary = salary__;
        id          = id__;
    }

    float calculateSalary() { return basicSalary + (0.10 * basicSalary); }

    void displayEmployeeDetails()
    {
        std::cout << "Name: " << name << "\n";
        std::cout << "Id: " << id << "\n";
        std::cout << "Net Salary: " << calculateSalary() << "\n";
    }
};

int main()
{
    Employee e;
    e.setEmployeeDetails("Juan", "DUHE8", 8900.0);
    e.displayEmployeeDetails();
    return 0;
}
