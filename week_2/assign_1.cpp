// Calculating the fine for orverdue books

#include <iostream>

int main()
{
    int bookId, dueDate, returnDate, daysOverdue, fineAmount, fineRate;

    std::cout << "Enter The Book Id, return date, and due date: " << "\n";
    std::cin >> bookId >> returnDate >> dueDate;

    daysOverdue = returnDate - dueDate;
    if (daysOverdue < 0) daysOverdue = 0;

    if (daysOverdue == 0) fineRate = 0;
    else if (daysOverdue <= 7) fineRate = 20;
    else if (daysOverdue <= 14) fineRate = 50;
    else fineRate = 100;

    fineAmount = fineRate * daysOverdue;

    std::cout << "Book ID: " << bookId << "\n";
    std::cout << "Due Date: " << dueDate << "\n";
    std::cout << "Return Date: " << returnDate << "\n";
    std::cout << "Days Overdue: " << daysOverdue << "\n";
    std::cout << "Fine Rate: " << fineRate << "\n";
    std::cout << "Fine Amount: " << fineAmount << "\n";

    return 0;
}
