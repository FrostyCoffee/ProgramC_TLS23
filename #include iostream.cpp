#include <iostream>
using namespace std;

float ctf(float c) {
    return (c * 9 / 5) + 32;
}

float ftc(float f) {
    return (f - 32) * 5 / 9;
}

int main() {
    int choice, y=1, n=0, repeat;
    float temperature;

    cout << "Temperature Converter" << endl;
    while (true) {
        cout << "1. Celsius" << endl << "2. Fahrenheit" << endl << "3. Exit" << endl;
        cout << "Enter the source temperature type (1/2/3): ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter temperature in Celsius: ";
            cin >> temperature;
            float result = ctf(temperature);
            cout << "Temperature in Fahrenheit: " << result << " °F" << endl << endl;
        } else if (choice == 2) {
            cout << "Enter temperature in Fahrenheit: ";
            cin >> temperature;
            float result = ftc(temperature);
            cout << "Temperature in Celsius: " << result << " °C" << endl << endl;
        } else if (choice ==3){
            cout << "The program has stopped."<< endl;
            break;
        } else {
            cout << "Invalid input. Please enter 1, 2, or 3. Program will be repeated." << endl;
        } 
    } 

    return 0;
}
