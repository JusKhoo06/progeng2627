#include <iostream> 
#include <cmath>
#include <cstdlib>
#include <ctime>


int main() {

    std::srand(std::time(NULL));

    int x = std::rand() % 6 + 2;
    int y = std::rand() % 6 + 2;  

    int newX=0; 
    int newY=0;
    int step=0;
    bool esc=true;

    std::cout<< "Your current coordinates is x = " << x << ", y = " << y << std::endl;
    
    std::cout << "Which coordinates will you like to move the knight to? (1-8): ";
    std::cin >> newX >> newY;   


    while((!(x==1 && y==1)&&!(x==1 && y==8)&&!(x==8 && y==1)&&!(x==8 && y==8))||esc){

        if ( newX<1 || newX>8 || newY<1 || newY>8 ) {
            std::cout << "Invalid coordinates. Please enter valid coordinates." << std::endl;
        
        }
        else{
            if ((std::abs(newX-x) == 2 && std::abs(newY-y) == 1) || (std::abs(newX-x) == 1 && std::abs(newY-y) == 2)){

                step = step + 1;
                x= newX;
                y= newY;
                std::cout<< "Your move was valid. Your current coordinates is x = " << x << ", y = " << y << std::endl;
                if ((x==1 && y==1)||(x==1 && y==8)||(x==8 && y==1)||(x==8 && y==8)){
                    esc=false;
                }
           } 
            else{
                std::cout << "Invalid coordinates. Please enter valid coordinates." << std::endl;

           }


        }
        if (((x==1 && y==1)||(x==1 && y==8)||(x==8 && y==1)||(x==8 && y==8)) && !esc ){
            x=x;
        }        
        else{
            std::cout << "Which coordinates will you like to move the knight to? (1-8): ";
            std::cin >> newX >> newY;
        }


    }

    std::cout << "You escaped within " << step << " moves." << std::endl;
    
    if(step<6){
        std::cout << "You succeeded at completing within 5 moves!" ;
    }
    else{
        std::cout << "You failed to complete within 5 moves...";
    }

    

}