#include <iostream>
#include <string>

using namespace std;

class Car {
private:
    string make;
    string model;
    int year;

public:
    // Parameterized constructor
    Car(string make, string model, int year) {
        this->make = make;    // Initialize make
        this->model = model;  // Initialize model
        this->year = year;    // Initialize year
    }

    // Method to display car details
    void display() {
        cout << "Make: " << make << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
    }
};

int main() {
    // Creating an instance of Car using the parameterized constructor
    Car myCar("Toyota", "Camry", 2022);

    // Displaying car details
    cout << "Car Details:" << endl;
    myCar.display();

    return 0;
}
