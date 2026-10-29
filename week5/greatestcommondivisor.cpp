#include <iostream>

int gcd(int a, int b){
    int divisor, remainder, bignum;
    if (a>b){
        divisor = b;
        bignum = a;
    }
    else{
        divisor = a;
        bignum = b;
    }

    remainder = bignum % divisor;

    while (remainder!=0){
        bignum = divisor;
        divisor = remainder;

        remainder = bignum % divisor;
    }

    return divisor;

}

int main(){

    std::cout << gcd(48,18);

}