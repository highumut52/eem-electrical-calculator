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

    double I = V / R;
    cout << "Current (I) = " << I << " Amps\n";
}

void calculateVoltage() {
    double I, R;
    cout << "Enter Current (I): ";
    cin >> I;
    cout << "Enter Resistance (Ohm): ";
    cin >> R;

    double V = I * R;
    cout << "Voltage (V) = " << V << " Volts\n";
}

void calculateResistance() {
    double V, I;
    cout << "Enter Voltage (V): ";
    cin >> V;
    cout << "Enter Current (I): ";
    cin >> I;

    if (I == 0) {
        cout << "Current cannot be zero!\n";
        return;
    }

    double R = V / I;
    cout << "Resistance (R) = " << R << " Ohms\n";
}

void calculatePower() {
    double V, I;
    cout << "Enter Voltage (V): ";
    cin >> V;
    cout << "Enter Current (I): ";
    cin >> I;

    double P = V * I;
    cout << "Power (P) = " << P << " Watts\n";
}

int main() {
    int choice;

    do {
        cout << "\n===== Electrical Calculator (EEM Project) =====\n";
        cout << "1. Calculate Current (I = V/R)\n";
        cout << "2. Calculate Voltage (V = I*R)\n";
        cout << "3. Calculate Resistance (R = V/I)\n";
        cout << "4. Calculate Power (P = V*I)\n";
        cout << "0. Exit\n";
        cout << "Choose an option: ";
        cin >> choice;

        switch (choice) {
        case 1: calculateCurrent(); break;
        case 2: calculateVoltage(); break;
        case 3: calculateResistance(); break;
        case 4: calculatePower(); break;
        case 0: cout << "Exiting program...\n"; break;
        default: cout << "Invalid choice! Try again.\n";
        }

    } while (choice != 0);

    return 0;
}
