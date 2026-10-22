#include <iostream>

bool checkPrime(int n){
    for(int cf = 2; cf < n; cf++){      

        if( (n % cf) == 0){ // n can be divided by cf...

            return false;

        }

    }

    return true;
}

void primeRange(int n1, int n2){

    for(int i=n1; i<=n2 ; i++){
        if (checkPrime(i)){
            std::cout << i << " ";
        }
    }


}


int main(){

    primeRange(25,41);

}