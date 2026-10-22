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

int main(){

    int x,n;
    int result = 0;

    std::cout << "Key in x and n (where x is the base and n is the exponent):  ";
    std::cin >> x >> n;

    for (int i=1; i<= n; i++){
        result = result + mypow(x,i);
    }

    std::cout << "The sum of powers is " << result;


}