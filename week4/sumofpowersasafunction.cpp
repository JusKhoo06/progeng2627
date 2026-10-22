#include <iostream>

double mypow(double base, int exp){
    double result=1; 
    bool negative = false;

    if (exp<0){
        exp=-exp;
        negative = true;
    }
    // we declare a variable for the result
    // (should it be initialised? to what value?)
    for(int i=0; i<exp; i++){
        result=result*base;
    }

    if (negative){
        result=1/result;
    }
    // TODO: use a for loop to implement the repeated multiplication algorithm 
    // so that at the end of the loop variable result contains base^exp

    return result;
    // at the end we return the value we computed
    // we *do not print* anything in the function
}

int sumofpow(int x, int i){
    
    double result;

    for (int j=1; j<=i; j++){
        result = result + mypow(x,j);
    }

    return result;

}

int main(){

    std::cout << "The sum of powers of x=4,n=5 is " << sumofpow(4,5);
    std::cout << "The sum of powers of x=3,n=7 is " << sumofpow(3,7);


}