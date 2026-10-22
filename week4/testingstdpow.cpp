#include <iostream>
#include <cmath>

int main(){
    std::cout << "2^3: " << std::pow(2, 3) << std::endl;
    //this prints 8

    std::cout << "0.5^2: " << std::pow(0.5, 2) << std::endl;
    //this prints 0.25

    std::cout << "1^0: " << std::pow(1, 0) << std::endl;
    //this prints 1

    std::cout << "4^0.5: " << std::pow(4, 0.5) << std::endl;
    //this prints 2
    std::cout << "4^(-0.5): " << std::pow(4, -0.5) << std::endl; 
    //this prints 0.5
}