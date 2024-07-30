#include <iostream>
using namespace std;

float celsiusToFahrenheit(float celsius) {
    return (9.0/5.0 * celsius) + 32;
}

int main() {
    float celsius;
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;
    float fahrenheit = celsiusToFahrenheit(celsius);
    cout << "Temperature in Fahrenheit: " << fahrenheit << endl;
    return 0;
}
