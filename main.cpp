#include <iostream>
using namespace std;

void calculateCurrent() {
    double V, R;
    cout << "Enter Voltage (V): ";
    cin >> V;
    cout << "Enter Resistance (Ohm): ";
    cin >> R;

    if (R == 0) {
        cout << "Resistance cannot be zero!\n";
        return;
    }

    cout << "Current (I) = " << V / R << " Amps\n";
}

void calculatePower() {
    double V, I;
    cout << "Enter Voltage (V): ";
    cin >> V;
    cout << "Enter Current (I): ";
    cin >> I;

    cout << "Power (P) = " << V * I << " Watts\n";
}

int main() {
    int choice;

    do {
        cout << "\n=== Electrical Calculator ===\n";
        cout << "1. Calculate Current (I = V/R)\n";
        cout << "2. Calculate Power (P = V*I)\n";
        cout << "0. Exit\n";
        cout << "Choose: ";
        cin >> choice;

        switch(choice) {
            case 1: calculateCurrent(); break;
            case 2: calculatePower(); break;
            case 0: cout << "Exiting...\n"; break;
            default: cout << "Invalid option!\n";
        }

    } while(choice != 0);

    return 0;
}
