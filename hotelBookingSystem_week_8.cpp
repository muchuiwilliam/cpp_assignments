/*  Hotel Booking System
 *   Mugambi William
 *   BCS-03-0091/2025
 */
#include <iostream>
#include <string>

class RoomBooking {
    std::string guestName;
    int         roomNumber, daysBooked;

  public:
    RoomBooking(std::string guestName__, int roomNumber__, int daysBooked__)
    {
        guestName  = guestName__;
        roomNumber = roomNumber__;
        daysBooked = daysBooked__;
        std::cout << "Room booking confirmed\n";
    }

    void displayBooking()
    {
        std::cout << "Guest Name: " << guestName << "\n";
        std::cout << "Room Number: " << roomNumber << "\n";
        std::cout << "Days Booked: " << daysBooked << "\n";
    }

    ~RoomBooking() { std::cout << "Booking ended, room released\n"; }
};

int main()
{
    RoomBooking b("Juan", 567, 3);
    b.displayBooking();
    return 0;
}
