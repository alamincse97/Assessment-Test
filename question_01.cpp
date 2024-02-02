#include<bits/stdc++.h>

using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

class Car {
public:
    string name;
    string model;
    int year;

    Car(string n, string m, int y) : name(n), model(m), year(y) {}

    virtual void displayInfo() {
        cout << year << " " << name << " " << model << endl;
    }
};

class ElectricCar : public Car {
public:
    double batteryCapacity;

    ElectricCar(std::string n, string m, int y, double capacity)
        : Car(n, m, y), batteryCapacity(capacity) {}

    void displayInfo() override {
        Car::displayInfo();
        cout << "Battery Capacity: " << batteryCapacity << " kWh" << endl;
    }
};

class GasCar : public Car {
public:
    double fuelEfficiency;

    GasCar(string n, string m, int y, double efficiency)
        : Car(n, m, y), fuelEfficiency(efficiency) {}

    void displayInfo() override {
        displayInfo();
        cout << "Fuel Efficiency: " << fuelEfficiency << " MPG" << endl;
    }
};

int main() {
    optimize();
    string carType;
    cout << "Enter car type (Electric/Gas): ";
    cin >> carType;

    string name, model;
    int year;
    
    cout << "Enter Name: ";
    cin >> name;
    cout << "Enter model: ";
    cin >> model;
    cout << "Enter year: ";
    cin >> year;

    if (carType == "Electric") {
        double batteryCapacity;
        cout << "Enter battery capacity (kWh): ";
        cin >> batteryCapacity;

        ElectricCar electricCar(name, model, year, batteryCapacity);
        electricCar.displayInfo();
    } else if (carType == "Gas") {
        double fuelEfficiency;
        cout << "Enter fuel efficiency (MPG): ";
        cin >> fuelEfficiency;

        GasCar gasCar(name, model, year, fuelEfficiency);
        gasCar.displayInfo();
    } else {
            cout << "Invalid car type entered." << endl;
    }

    return 0;
}
