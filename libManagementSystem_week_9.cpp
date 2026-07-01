/*  Library Management System
 *   Mugambi William
 *   BCS-03-0091/2025
 */

#include <iostream>
#include <string>

class Person {
  protected:
    std::string name;

  public:
    void setName(std::string name__) { name = name__; }

    std::string getName() { return name; }
};

class LibraryMember : public Person {
    int memberID, booksBorrowed;

  public:
    LibraryMember(std::string name, int memberID__, int booksBorrowed__)
    {
        setName(name);
        memberID      = memberID__;
        booksBorrowed = booksBorrowed__;
    }

    int getMemberID() { return memberID; }

    int getBooksBorrowed() { return booksBorrowed; }
};

class PremiumMember : public LibraryMember {
    double membershipFee;

  public:
    PremiumMember(std::string name, int memberID__, int booksBorrowed__, double membershipFee__)
        : LibraryMember(name, memberID__, booksBorrowed__)
    {
        membershipFee = membershipFee__;
    }

    double getMembershipFee() { return membershipFee; }
};

int main()
{
    PremiumMember pm("Juan", 69, 3, 7800.0);
    std::cout << pm.getMembershipFee() << "\n";
    std::cout << pm.getMemberID() << "\n";
    std::cout << pm.getName() << "\n";
    std::cout << pm.getBooksBorrowed() << "\n";
}
