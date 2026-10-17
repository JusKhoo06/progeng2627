#include <iostream>

int main(){

    int lb,ub,guess,rangestatus;
    int status= 0;

    std::cout << "I want you to think of a number in your head. I will try my best to guess the number."<< std::endl;

    std::cout<< "Enter the lower bound of your number: ";
    std::cin >> lb ;
    std::cout << std::endl;

    std::cout<< "Enter the upper bound of your number: ";
    std::cin >> ub ;
    std::cout << std::endl;

    while (status!= 1){
        guess=(lb+ub)/2;
        std::cout << "Your number is " << guess << " ! (Enter 1 if true and 0 if false) ";
        std::cin >> status;
        std::cout << std::endl;

        if(status==1){
            break;
        }
        else{
            std::cout << "Is your number greater or lower than my number? (Enter 0 if lower and 1 if higher)";
            std::cin >> rangestatus;
            std::cout << std::endl;

            if (rangestatus==0){
                ub= guess;
            }
            else if(rangestatus==1){
                lb= guess; 
            }
        }


    }
    std::cout << " I GOT THE NUMBER YAYYY" << std::endl;
}