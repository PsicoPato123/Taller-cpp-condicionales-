#include <iostream>
int main() {
    const int read  = 4; //equivale a 100
    const int write = 2; //equivale a 010
    const int execute = 1; //equivale a 001
    int Permiso;
    std::cout << "Sistema de Permisos Patito\n";
    std::cout << "Ingrese un valor de patipermisos de 0 a 5: ";
    std::cin >> Permiso;
    std::cout << "\nAnalizando patipermisos para el valor " << Permiso << ":";

    if (Permiso < 0 || Permiso > 5) {
    std::cout << "Valor invalido\n. Debe estar entre 0 y 5.\n";
    return 0;

    if (Permiso & read) {
       std:: cout << "[X] LEER (4)";
    } else {
       std:: cout << "[ ] LEER";
    }

    if (Permiso & write) {
       std:: cout << "[X] ESCRIBIR (2)";
    } else {
        std::cout << "[ ] ESCRIBIR";
    }

    if (Permiso & execute) {
        std::cout<< "[X] EJECUTAR (1)";
    } else {
        std::cout << "[ ] EJECUTAR" ;
    }
    if (Permiso == 0) {
       std::cout << "El usuario no tiene ningun patipermiso\n " ;
    }
    return 0;
}

