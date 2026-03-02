#include <iostream>

int main () {
//double * double=double
double C, F, K, R;
std::cout<<"Ingresa el valor de grados Celsius a convertir :D\n";
std::cin>>C;

F= C * 9/5 + 32;
K= C + 273.15;
R= C * 9/5 + 491.67;

std::cout<<C<<" grados celsius equivale a:\n"<<F<<" grados farenheit \n"<<K<<" grados kelvin\n"<<R<<" grados rankine\n";
return 0;

}