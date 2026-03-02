#include <iostream>

int main() {
    double saldo = 254500.7; 
    int opt;
    double cantidad;
      std::cout << "1. Deposito\n";
      std::cout << "2. Retiro\n" ;   
      std::cout << "3. Consultar saldo\n";
      std::cout << "4. Salir\n";
      std::cout << "Seleccione una opcion: ";
    std::cin >> opt;

    switch(opt) {
        case 1:
     std::cout << "Ingrese monto a depositar: ";
       std::cin >> cantidad;
        if(cantidad > 0) {
        saldo += cantidad; 
        std::cout << "Deposito exitoso :D\n Nuevo saldo: $" << saldo;
        } else {    
      std::cout << "Monto invalido \n";   
    }
    break;
    
    case 2:    
    std::cout << "Ingrese monto a retirar: "; 
    std::cin >> cantidad;
  if(cantidad > 0 && cantidad <= saldo) {
    saldo -= cantidad; 
    std::cout << "Retiro exitoso :D\n Nuevo saldo: $" << saldo;
     } else if (cantidad > saldo) {
    std::cout << "Fondos insuficientes :c \n";
   } else {   
    std::cout << "Monto invalido\n";
   } break;

    case 3:
    std::cout << "Su saldo actual es: $"<<saldo;
     break;

     case 4: 
     std::cout << "Gracias por usar el cajero :D\n";
    break;
    default: 
    std::cout << "Opcion no valida.";
    }
    return 0;
}
