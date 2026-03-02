int main() {
    const int read  = 4; 
    const int write = 2; 
    const int execute = 1; 

    int Permiso;

    std::cout << "Sistema de Permisos Bitmask" << endl;
    std::cout << "Ingrese un valor de permisos (0-7): ";
    std::cin >> Permiso;
    std::cout << "\nAnalizando permisos para el valor " << Permiso << ":" << endl;

    if (Permiso & read) {
       std:: cout << "[X] LEER (4)" << endl;
    } else {
       std:: cout << "[ ] LEER" << endl;
    }

    if (Permiso & write) {
       std:: cout << "[X] ESCRIBIR (2)" << endl;
    } else {
        std::cout << "[ ] ESCRIBIR" << endl;
    }

    if (Permiso & execute) {
        std::cout<< "[X] EJECUTAR (1)" << endl;
    } else {
        std::cout << "[ ] EJECUTAR" << endl;
    }
    if (Permiso == 0) {
       std::cout << "El usuario no tiene ningun permiso." << endl;
    }

    return 0;
}
