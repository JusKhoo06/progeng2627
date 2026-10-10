#include <iostream>

int main(){

    double celsius, fahrenheit;
    std::cout << "Enter temperature in degree Celsius: " << std::endl;
    std::cin >> celsius;

    fahrenheit = (celsius *1.8) +32;

    std::cout << "Temperature in degree Fahrenheit: " << fahrenheit << std::endl;

}