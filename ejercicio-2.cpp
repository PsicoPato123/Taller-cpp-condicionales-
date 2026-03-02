#include <iostream>

int main (){
    //calcular a partir de los lados del triangulo, que tipo es y si es válido
    double a, b, c; 
    std::cout<<"Ingresa el valor de los lados del triángulo\n";
     std::cout<<"Lado A:" ;
    std::cin>>a;
   std::cout<<"\nLado B:";
      std::cin>>b;
     std::cout<<"\nLado C:";
   std::cin>>c;
   
   if ((a+b>c) && (a+c>b) && (b+c>a)) {
    std::cout<<"Tu triangulo es valido :D \n";
    std::cout<<"¿De que tipo es tu triangulo?\n"
       if (a == b && b == c){
            std::cout<<"Tu triangulo es equilatero\n";
        }
        else if (a == b || a == c || b == c){
            std::cout<<"Tu tiangulo es isosceles\n";
        }
        else{
            std::cout<<"Tu triangulo es escaleno\n";
        }
   } 
   else {
    std::cout<<"Ese triangulo no existe :c";
   }
    return 0;
}   