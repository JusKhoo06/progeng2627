#include <iostream>

int main(){

    double weight, height, bmi;
    std::cout << "Enter your weight in kg: " << std::endl;
    std::cin >> weight;

    std::cout << "Enter your height in m: " << std::endl;
    std::cin >> height;

    bmi = weight /(height*height);

    std::cout << "Your BMI is: " << bmi << std::endl;
}