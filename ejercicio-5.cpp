#include <iostream>

int main (){
    //85 – 100 = A
    //84 – 75 = B
    //74 – 65 = C
    //64 – 60 = D
    //0 – 59 = F
    
    double nota;
    char Letra;
    std::string resultado;
    std::cout << "Hora de calificar ;D \n";
    std::cout << "Ingresa la calificación del estudiante de 0 a 100: ";
    std::cin >> nota;

    if (nota >= 85) {
        Letra = 'A';
        resultado = "Aprobado :D";
    }
    else if (nota >= 75) {
        Letra = 'B';
        resultado = "Aprobado :D";
    }
    else if (nota >= 65) {
        Letra = 'C';
        resultado = "Aprobado :D";
    }
    else if (nota >= 60) {
        Letra = 'D';
        resultado = "Aprobado :D";
    }
    else {
        Letra = 'F';
        resultado = "Reprobado :C";
    }

    std::cout << "Letra: " << Letra << std::endl;
    std::cout << "Estado: " << resultado << std::endl;

    return 0;
}
