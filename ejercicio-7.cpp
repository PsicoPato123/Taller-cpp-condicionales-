#include <iostream>
using namespace std;

int main() {
    int year;
    std::cout << "Analiza si es un año bisiesto\n: ";
    std::cout << "Ingresa un año: ";
    cin >> year;
    if ((year % 4 == 0 && year % 100!=0) || (year % 400 == 0)) {
        cout << year << " \nSi es un año bisiesto.";
    } else {
        cout << year << " \nNo es un año bisiesto.";
    }

    return 0;
}
