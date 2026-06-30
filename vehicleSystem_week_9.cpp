/*  Vehicle Management System
 *   Mugambi William
 *   BCS-03-0091/2025
 */

#include <iostream>
#include <string>

class Vehicle {
  public:
    std::string  brand;
    unsigned int manufactureYear;

    void displayVehicle()
    {
        std::cout << "Brand: " << brand << "\n";
        std::cout << "Year of Manufacture: " << manufactureYear << "\n";
    }
};

class Car : public Vehicle {
  public:
    unsigned int doorCount, engineCapacity;

    void displayCar()
    {
        std::cout << "Number of Doors: " << doorCount << "\n";
        std::cout << "Engine capacity: " << engineCapacity << "\n";
    }
};

int main()
{
    Car c;
    c.brand           = "Volvo";
    c.doorCount       = 2;
    c.engineCapacity  = 9000;
    c.manufactureYear = 2025;
    c.displayVehicle();
    c.displayCar();
}
