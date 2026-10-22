#include <iostream> 

int perimeter(double x, double y){
    return 2*(x+y);
}

int area(double x,double y){
    return x*y;

}

int main(){

    std::cout << "Perimeter is " << perimeter(4,5) << " and area is " << area(4,5);

}