/*  Bank Account System
 *   Mugambi William
 *   BCS-03-0091/2025
 */

#include <iostream>
#include <string>

class BankAccount {
    std::string holderName;
    int         accNumber;
    float       balance;

  public:
    BankAccount(std::string holderName__, int accNumber__, float balance__)
    {
        holderName = holderName__;
        accNumber  = accNumber__;
        balance    = balance__;
        std::cout << "Account successfully created\n";
    }

    void displayAccount()
    {
        std::cout << "Holder Name: " << holderName << "\n";
        std::cout << "Account Number: " << accNumber << "\n";
        std::cout << "Balance : " << balance << "\n";
    }

    ~BankAccount() { std::cout << "Account closed successfully\n"; }
};

int main()
{
    BankAccount acc("Juan", 789, 3400.0);
    acc.displayAccount();
    return 0;
}
