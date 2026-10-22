#include <iostream>

// we can define a function that returns a bool

bool leap_year(int year){
    bool ly;
    if( (year % 4) == 0){ 
        // if multiple of 4

        if( (year % 100) == 0){ 
            if ((year % 400) ==0 ){
                ly=true;
            }
            else{
                ly=false;    
            }

        }
        else{ 
            // if not multiple of 100
            // (but still multiple of 4)
            ly=true;
            // ...

        }
    }
    else{
        // if not multiple of 4
        ly=false;
    }

    // TODO: check whether the year is a leap year or not
    // store result in variable ly

    return ly;
    // we *do not print* anything in the function
}

int main(){

    std::cout << (leap_year(1600) == true) << std::endl;
    std::cout << (leap_year(1700) == false) << std::endl;
}