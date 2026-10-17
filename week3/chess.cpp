#include <iostream> 
#include <string>
#include <cmath>

int main() {

    int x,y, newX, newY;
    std::string validMove = "not valid";
    std::string piece = " ";

    std::cout << "Choose a chess piece (queen, rook, bishop, knight, king): ";
    std::cin >> piece; 
    
    std::cout << "Enter the x and y coordinates of the piece (1-8): ";
    std::cin >> x >> y;

    std::cout << "Which coordinates will you like to move the piece to? (1-8): ";
    std::cin >> newX >> newY;   

    if (x<1 || x>8 || y<1 || y>8 || newX<1 || newX>8 || newY<1 || newY>8 || newX==x && newY==y) {
        std::cout << "Invalid coordinates. Please enter valid coordinates." << std::endl;
        return 0;
    }
    if (piece == "queen") {
        if (newX == x || newY == y || std::abs((newX-x)/(newY-y)) == 1){
            validMove = "valid";
        }
        else{
            validMove = "not valid";
        }
    } 
    else if (piece == "rook") {
        if (newX == x || newY == y){
            validMove = "valid";
        }
        else{
            validMove = "not valid";
        }
    } 
    else if (piece == "bishop") {
        if (std::abs((newX-x)/(newY-y)) == 1){
            validMove = "valid";
        }
        else{
            validMove = "not valid";
        }
    } 
    else if (piece == "knight") {
        if ((std::abs(newX-x) == 2 && std::abs(newY-y) == 1) || (std::abs(newX-x) == 1 && std::abs(newY-y) == 2)){
            validMove = "valid";
        }
        else{
            validMove = "not valid";
        }
    } 
    else if (piece == "king") {
        if ((newX==x || newX==x+1 || newX==x-1) && (newY==y ||newY==y+1 || newY==y-1)){
            validMove = "valid";
        }
        else{
            validMove = "not valid";
        }
    } 
    else {
        std::cout << "Invalid piece. Please enter a valid piece." << std::endl;
    }
    std::cout << "The move is " << validMove << std::endl;

}