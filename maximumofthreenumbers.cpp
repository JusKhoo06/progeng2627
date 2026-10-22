#include <iostream>

double max(double num1, double num2, double num3){

    double maximum;

    if (num1>num2){
        if(num1>num3){
            maximum = num1;
        }
        else{
            maximum = num3;
        }
    }
    else if (num2>num3){
        maximum = num2;
    }
    else {
        maximum = num3;
    }

    return maximum;

}

int main(){
    std::cout << max(1,2,3) << std::endl;
    std::cout << max(1,3,2) << std::endl; 
    std::cout << max(2,1,3) << std::endl;
    std::cout << max(2,3,1) << std::endl;
    std::cout << max(3,1,2) << std::endl;
    std::cout << max(3,2,1) << std::endl;   

}