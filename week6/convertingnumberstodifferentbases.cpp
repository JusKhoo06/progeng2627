#include <iostream> 
#include <vector> 

bool digits_in_base(int num, int base, std::vector<int>& digits) {
    if (base<2 || base>16){
        return false;
    }
    while((num%base)!=0){
        digits.push_back(num%base);
        num=num/base;
    }
    return true;

}

void print_digits_as_number(std::vector<int> digits){

    for(int i=digits.size()-1;i>-1;i--){
        if(digits[i]==10){
            std::cout << "A";
        }
        else if(digits[i]==11){
            std::cout << "B";
        }
        else if(digits[i]==12){
            std::cout << "C";
        }
        else if(digits[i]==13){
            std::cout << "D";
        }
        else if(digits[i]==14){
            std::cout << "E";
        }
        else if(digits[i]==15){
            std::cout << "F";
        }
        else{
            std::cout << digits[i];
        }
        
    }
    std::cout << std::endl;



}

int main() {
    int num = 123;
    int base = 8;
    std::vector<int> digits;

    if (digits_in_base(num, base, digits)) {
        print_digits_as_number(digits);
    } else {
        std::cout << "Invalid base" << std::endl;
    }

    num = 250;
    base = 16;
    digits.clear();

    if (digits_in_base(num, base, digits)) {
        print_digits_as_number(digits);
    } else {
        std::cout << "Invalid base" << std::endl;
    }

    num = 250;
    base = 17;
    digits.clear();

    if (digits_in_base(num, base, digits)) {
        print_digits_as_number(digits);
    } else {
        std::cout << "Invalid base" << std::endl;
    }

    return 0;
}