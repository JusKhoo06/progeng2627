#include <iostream> 
#include <vector> 
#include<cmath>

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

int digits_to_decimal(std::vector<int>& digits, int base){

    int final=0;

    for (int i=0; i<digits.size();i++){
        final=final+(pow(base,i)*digits[i]);
    }

    return final;


}

int main() {
    int num = 123;
    int base = 8;
    std::vector<int> digits;

    if (digits_in_base(num, base, digits)) {
        print_digits_as_number(digits);

        int decimal = digits_to_decimal(digits, base);
        std::cout << "Decimal number restored from digits: " << decimal << std::endl;
    } else {
        std::cout << "Invalid base" << std::endl;
    }

    num = 250;
    base = 16;
    digits.clear();

    if (digits_in_base(num, base, digits)) {
        print_digits_as_number(digits);

        int decimal = digits_to_decimal(digits, base);
        std::cout << "Decimal number restored from digits: " << decimal << std::endl;
    } else {
        std::cout << "Invalid base" << std::endl;
    }

    num = 250;
    base = 17;
    digits.clear();

    if (digits_in_base(num, base, digits)) {
        print_digits_as_number(digits);

        int decimal = digits_to_decimal(digits, base);
        std::cout << "Decimal number restored from digits: " << decimal << std::endl;
    } else {
        std::cout << "Invalid base" << std::endl;
    }

    return 0;
}