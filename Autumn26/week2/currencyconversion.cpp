#include <iostream> 

int main(){

    double gbp, euro;
    std::cout << "Enter amount in GBP: " << std::endl;
    std::cin >> gbp;

    euro = gbp * 1.18;

    std::cout << "Amount in Euro: " << euro << std::endl;


}