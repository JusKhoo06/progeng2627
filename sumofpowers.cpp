#include <iostream>
#include <cmath>

int main(){

    int x,n;
    int result = 0;

    std::cout << "Key in x and n (where x is the base and n is the exponent):  ";
    std::cin >> x >> n;

    for (int i=1; i<= n; i++){
        result = result + std::pow(x,i);
    }

    std::cout << "The sum of powers is " << result;


}