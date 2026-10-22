#include <iostream>

int primefactor(int n){
    for(int cf = 2; cf < n; cf++){      

        if( (n % cf) == 0){ // n can be divided by cf...

            return cf;

        }

    }

    return 0;
}
int main(){

    std::cout << "The smallest prime factor is " << primefactor(7);

}
