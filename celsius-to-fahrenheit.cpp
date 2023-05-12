#include <iostream>

int main(){
    float celsius, fahrenheit;
    std::cout<<"\t--Conversor de Celsius a Fahrenheits--\n"<<std::endl;
    std::cout<<"Ingresa los grados celsius: ";std::cin>>celsius;
    fahrenheit=(celsius*9/5)+32;
    std::cout<<"\n"<<celsius<<" grados celsius son "<<fahrenheit<<" fahrenheits"<<std::endl;
    return 0;
}