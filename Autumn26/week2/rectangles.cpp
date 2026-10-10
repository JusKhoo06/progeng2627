#include <iostream>

int main(){

    double length, width, area;

    std::cout << "Enter length of rectangle" << std::endl;
    std::cin >> length;

    std::cout << "Enter width of rectangle" << std::endl;
    std::cin >> width;

    area = length * width;

    std::cout << "Area of rectangle is " << area << std::endl;


}