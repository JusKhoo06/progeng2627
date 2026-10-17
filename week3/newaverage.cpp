#include <iostream>

int main() {
    int dividend;
    int divisor;
    int quotient = 0;

    std::cin >> dividend >> divisor;
    std::cout << "We want to perform integer division of " << dividend << " by " << divisor << std::endl;

    if (divisor <= 0 || dividend < 0) {
        std::cout << "Please enter a non-negative dividend and a positive divisor.\n";
        return 1;
    }

    while (dividend >= divisor) {
        dividend = dividend -divisor;
        quotient = quotient +1;
    }

    std::cout << "Quotient: " << quotient << '\n';
    std::cout << "Remainder: " << dividend << '\n';

    return 0;
}