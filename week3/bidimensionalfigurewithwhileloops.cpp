#include <iostream>

int main(){
    int n;
    std::cin >> n;

    // n times we draw one row
    // note that we need a different variable
    // for the loop counter
    int c = 0;
    int c2 = 0;
    while(c2 < n){

        // the following loop draws one row
        while( c < n){
            std::cout << "*"; 
            c=c+1;
            // there is no << std::endl
            // because we want them on the same row
        }
        c=0;
        c2=c2+1;
        std::cout << std::endl;
        // we go on a newline after each row

    }

}