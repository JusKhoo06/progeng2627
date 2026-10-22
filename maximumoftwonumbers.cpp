#include <iostream>

double max(double num1, double num2){

    double maximum;

    if (num1>num2){
        maximum = num1;
    }
    else{
        maximum = num2;
    }

    return maximum;

}

int main(){
    std::cout << max(3.4, 5.6) << std::endl;
    std::cout << max(10.2, 10.7) << std::endl; 
    std::cout << max(9.9, 9.11) << std::endl;

}