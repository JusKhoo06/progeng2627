#include <iostream>

int main(){

    int n;
    std::cin >> n;

    int i=1,multiplier=1;

    while (i<n+1){
        for (int j=1; j<n+1; j++){
            std::cout << j*multiplier;
            std::cout << "\t";
        }
        std::cout << std::endl;
        i=i+1;
        multiplier=multiplier+1;
    }




}