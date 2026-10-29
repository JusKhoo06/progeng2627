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

int euler_totient(int n){

    int conum=0;

    for (int i=1; i<n;i++){

        if (gcd(i, n)==1){
            conum++;

        }
    }

    return conum;


}

int main(){

    std::cout << euler_totient(9) << std::endl;
    std::cout << euler_totient(12) << std::endl;
    std::cout << euler_totient(17) << std::endl;
    std::cout << euler_totient(37) << std::endl;

}