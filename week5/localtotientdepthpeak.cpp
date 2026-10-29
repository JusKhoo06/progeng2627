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

int totient_depth(int n){

    int depth=0;
    while (n != 1){

        n = euler_totient(n);
        depth++ ;

    }

    return depth;

}

int strongest_local_peak(int a, int b){
    int x=a+1;
    int xminus1=a;
    int xplus1=a+2;
    int chosenx=x;

    double new_peakstrength;
    double greatest_peakstrength = 0;


    while (x<b){

        if ((totient_depth(x)>totient_depth(xminus1))&&(totient_depth(x)>totient_depth(xplus1))){

            new_peakstrength = (2*totient_depth(x)-totient_depth(xminus1)-totient_depth(xplus1))/2.0;

            if (new_peakstrength > greatest_peakstrength){

                greatest_peakstrength = new_peakstrength;
                chosenx = x;
            }

        }

        x++;
        xminus1++;
        xplus1++;

    }

    if (greatest_peakstrength <= 0){
        return -1;
    }
    else{
        return chosenx;
    }

}

int main(){

    int a=50;
    int b=60;

    std::cout << "x = " << strongest_local_peak(a,b) << std::endl;
    std::cout << "depth (x) = " << totient_depth(strongest_local_peak(a,b)) << std::endl;
    std::cout << "depth (x-1) = " << totient_depth(strongest_local_peak(a,b)-1) << std::endl;
    std::cout << "depth (x+1) = " << totient_depth(strongest_local_peak(a,b)+1) << std::endl;

}