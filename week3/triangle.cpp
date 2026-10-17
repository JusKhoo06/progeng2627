#include <iostream>
#include <cmath>
int main() {
    int a, b, c;
    double area,s,perimeter;
    std::cout << "Enter the lengths of the three sides of the triangle: ";
    std::cin >> a >> b >> c;

    if ((a+b)>c && (a+c)>b && (b+c)>a){
        if (a==b && b==c && a==c){
            std::cout << "This is an equilateral triangle." << std::endl;
        }
        else if (a==b || b==c || a==c){
            std::cout << "This is an isosceles triangle." << std::endl;
        }
        else{
            std::cout << "This is a scalene triangle." << std::endl;
        }
        perimeter = a + b + c;
        s=perimeter/2;
        area = std::sqrt(s*(s-a)*(s-b)*(s-c));        
        std::cout << "The perimeter of the triangle is: " << perimeter << std::endl;
        std::cout << "The area of the triangle is: " << area << std::endl;

    }
    else{
        std::cout << "This is an invalid triangle." << std::endl;
    }

}