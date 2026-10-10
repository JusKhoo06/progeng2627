#include <iostream>

int main(){

    double num, absv;
    bool isNegative;

    std::cout << "please enter a number" << std::endl;
    std::cin >> num;

    isNegative = (num < 0);
    if(isNegative){
        absv = -num;
    }
    else{
        absv = num;
    }

    std::cout << "the absolute value of the number is " << absv << std::endl;


}