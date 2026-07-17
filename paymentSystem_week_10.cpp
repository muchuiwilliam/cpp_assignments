/* Payment System (polymorphism)
 * Mugambi William
 * BCS-03-0091/2025
 */

#include <iostream>

class Payment {
  private:
    double balance;

  public:
    Payment(double x) { balance = x; }
    void processPayment(double x)
    {
        balance -= x;
        std::cout << balance << std::endl;
    }

    void processPayment(double x, double f)
    {
        balance -= x + f;
        std::cout << balance << std::endl;
    }

    void processPayment(double x, double f, double d)
    {
        balance -= (x + f - d);
        std::cout << balance << std::endl;
    }
};

int main()
{
    Payment p(1000);
    p.processPayment(69);
    p.processPayment(69, 10);
    p.processPayment(69, 10, 17);
    return 0;
}
