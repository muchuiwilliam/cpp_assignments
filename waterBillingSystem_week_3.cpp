/* Calculate monthly water bills using modullar programming
 * Mugambi William
 * BCS-03-0091/2025
 */

#include <iostream>
#include <string>

void getCustomerDetails(std::string& customerName, float& unitsConsumed)
{
    std::cout << "Enter customer name: " << "\n";
    std::cin >> customerName;

    std::cout << "Enter units consumed: " << "\n";
    std::cin >> unitsConsumed;
}

float calculateBill(float unitsConsumed, float ratePerUnit) { return unitsConsumed * ratePerUnit; }
float calculateNetBill(float totalBill, float discount) { return totalBill - discount; }

float applyDiscount(float totalBill)
{
    if (totalBill > 100.0) return totalBill * 0.1;
    else return 0.0;
}

void displayBill(
    std::string& customerName, float unitsConsumed, float totalBill, float discount, float netBill)
{
    std::cout << std::fixed;
    std::cout.precision(2);
    std::cout << "Customer Name: " << customerName << "\n";
    std::cout << "Units Consumed: " << unitsConsumed << "\n";
    std::cout << "Total Bill :" << totalBill << "\n";
    std::cout << "Discount: " << discount << "\n";
    std::cout << "Net Bill: " << netBill << "\n";
}

int main()
{
    std::string customerName;
    float       unitsConsumed, totalBill, discount, netBill, ratePerUnit;
    ratePerUnit = 50.0;

    getCustomerDetails(customerName, unitsConsumed);
    totalBill = calculateBill(unitsConsumed, ratePerUnit);
    discount  = applyDiscount(totalBill);
    netBill   = calculateNetBill(totalBill, discount);
    displayBill(customerName, unitsConsumed, totalBill, discount, netBill);
}
