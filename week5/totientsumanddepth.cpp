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

int totient_sum(int n, int &depth){

    int sum=0;

    while (n != 1){

        n = euler_totient(n);
        sum=sum+n;
        depth++ ;

    }

    return sum;

}

int main(){

    int depth=0;

    std::cout << totient_sum(10, depth) << " , " << depth << std::endl;

}