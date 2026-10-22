#include <iostream>

// function myswap to be used 
// in sort_two_numbers below
// must be included here (beforehand)
void myswap(double& a, double& b){

    double tmp;
    tmp = a;
    a = b;
    b = tmp;

}


void sort_three_numbers(double& s1, double& s2, double& s3){
    double temp;
    if (s1>s2){
        myswap(s1,s2);
    }
    if (s1>s3){
        myswap(s1,s3);
    }
    if (s2>s3){
        myswap(s2,s3);
    }


}


int main(){
    double n1=3, n2=2, n3=1;
    sort_three_numbers(n1, n2, n3);
    std::cout << n1 << " " << n2 << " " << n3 << std::endl;

}


