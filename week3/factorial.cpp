#include <iostream>

int main(){

    int i,factorial;
    std::cin >> i;
    factorial = 1;
    for(int j=1; j <= i; j++ ){
        factorial=factorial*j;
    }
    std::cout << factorial << std::endl;
}