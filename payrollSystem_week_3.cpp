/* Calculate Employee salaries in a structured way using functions
 * Mugambi William
 * BCS-03-0091/2025
 */

#include <iostream>
#include <string>

float calculateOvertimePay(float overtimeHours, float ratePerHour)
{
    return overtimeHours * ratePerHour;
}

float calculateNetsalary(float basicSalary, float overtimePay) { return basicSalary + overtimePay; }

void getEmployeeDetails(std::string& employeeName, float& basicSalary, float& overtimeHours)
{
    std::cout << "Enter Employee Name: ";
    std::cin >> employeeName;

    std::cout << "Enter basic salary, and overtime hours worked : " << "\n";
    std::cin >> basicSalary >> overtimeHours;
}

void displayPayslip(std::string employeeName, float netSalary)
{
    std::cout << "Employee Name: " << employeeName << "\n";
    std::cout << "Net Salary: " << netSalary << "\n";
}

int main()
{
    std::string employeeName;
    float       basicSalary, overtimeHours, ratePerHour, netSalary, overtimePay;
    ratePerHour = 50.0;
    getEmployeeDetails(employeeName, basicSalary, overtimeHours);
    overtimePay = calculateOvertimePay(overtimeHours, ratePerHour);
    netSalary   = calculateNetsalary(basicSalary, overtimePay);
    displayPayslip(employeeName, netSalary);

    return 0;
}
