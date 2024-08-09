#include <iostream>
#include <string>

using namespace std;

class Car {
private:
    int year_of_manufacture;
    string model;
    double top_speed;
    string color;
    double current_speed;
    bool is_running;

public:
    // Function to set the properties of the car
    void setProperties(int year, const string& mdl, double top_spd, const string& clr) {
        year_of_manufacture = year;
        model = mdl;
        top_speed = top_spd;
        color = clr;
        current_speed = 0;
        is_running = false;
    }

    // Function to start the car
    void start() {
        if (!is_running) {
            cout << "Starting the car...\n";
            is_running = true;
        } else {
            cout << "The car is already running.\n";
        }
    }

    // Function to accelerate
    void speed_up(double increment) {
        if (is_running) {
            if (current_speed + increment <= top_speed) {
                current_speed += increment;
                cout << "Speeding up. Current speed: " << current_speed << " mph\n";
            } else {
                cout << "Cannot exceed top speed.\n";
            }
        } else {
            cout << "Cannot speed up. Start the car first.\n";
        }
    }

    // Function to decelerate
    void speed_down(double decrement) {
        if (is_running) {
            if (current_speed - decrement >= 0) {
                current_speed -= decrement;
                cout << "Slowing down. Current speed: " << current_speed << " mph\n";
            } else {
                current_speed = 0;
                cout << "Car has stopped.\n";
            }
        } else {
            cout << "Cannot slow down. Start the car first.\n";
        }
    }

    // Function to stop the car
    void stop() {
        if (is_running) {
            cout << "Stopping the car...\n";
            is_running = false;
            current_speed = 0;
        } else {
            cout << "The car is already stopped.\n";
        }
    }
};

int main() {
    // Creating three car objects
    Car car1, car2, car3;

    // Setting properties manually for each car
    car1.setProperties(2022, "Toyota Camry", 130, "Red");
    car2.setProperties(2023, "Honda Civic", 120, "Blue");
    car3.setProperties(2024, "Ford Mustang", 160, "Yellow");

    // Example usage
    car1.start();
    car1.speed_up(50);
    car1.speed_up(120);
    car1.speed_down(30);
    car1.speed_down(100);
    car1.stop();

    car2.start();
    car2.speed_up(40);
    car2.speed_up(100);
    car2.speed_down(20);
    car2.stop();

    car3.start();
    car3.speed_up(70);
    car3.speed_down(50);
    car3.speed_down(30);
    car3.stop();

    return 0;
}
