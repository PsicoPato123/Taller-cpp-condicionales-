   #include <iostream>
 int main (){
       //int+int=int
       //int*float=float
       std::cout<<"Inicia tu calculadora :D\n";
       double a,b;
       std::cout<<"n1: ";
       std::cin>>a;
       char operador;
       std::cout<<"Ingresa el operador (+, -, *, /, %): ";
       std::cin>>operador;
       std::cout<<"n2: ";
       std::cin>>b;

       switch (operador){
        case '+':
         std::cout << "Resultado: " << a + b ;
          break;
        case '-':
         std::cout << "Resultado: " << a - b ;
          break;
        case '*':
         std::cout << "Resultado: " << a * b ;
          break;
        case '/':
         if (b==0) {
            std::cout<<"División inexistente\n";}
         std::cout << "Resultado: " << a / b;
          break;
       }

    return 0;
 }