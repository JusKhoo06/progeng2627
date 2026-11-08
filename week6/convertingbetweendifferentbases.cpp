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

bool convert_base(std::vector<int>& octal_digits, int base1, int base2, std::vector<int>& hex_digits){
    if (base1<2||base1>16||base2<2||base2>16){
        return false;
    }

    int num= digits_to_decimal(octal_digits, base1);

    while((num%base2)!=0){
        hex_digits.push_back(num%base2);
        num=num/base2;
    }
    return true;

}

int main() {
    int num = 250;
    std::vector<int> octal_digits;
    std::vector<int> hex_digits;

    /// Obtain the octal digits of 250
    digits_in_base(num, 8, octal_digits);

    std::cout << "Octal: ";
    print_digits_as_number(octal_digits);

    /// Convert the octal digits to hexadecimal digits
    if (convert_base(octal_digits, 8, 16, hex_digits)) {
        std::cout << "Hexadecimal: ";
        print_digits_as_number(hex_digits);
    } else {
        std::cout << "Invalid base" << std::endl;
    }

    num = 123;
    octal_digits.clear();
    hex_digits.clear();

    /// Obtain the octal digits of 250
    digits_in_base(num, 8, octal_digits);

    std::cout << "Octal: ";
    print_digits_as_number(octal_digits);

    /// Convert the octal digits to hexadecimal digits
    if (convert_base(octal_digits, 1, 16, hex_digits)) {
        std::cout << "Hexadecimal: ";
        print_digits_as_number(hex_digits);
    } else {
        std::cout << "Invalid base" << std::endl;
    }

    num = 123;
    octal_digits.clear();
    hex_digits.clear();

    /// Obtain the octal digits of 250
    digits_in_base(num, 8, octal_digits);

    std::cout << "Octal: ";
    print_digits_as_number(octal_digits);

    /// Convert the octal digits to hexadecimal digits
    if (convert_base(octal_digits, 8, 16, hex_digits)) {
        std::cout << "Hexadecimal: ";
        print_digits_as_number(hex_digits);
    } else {
        std::cout << "Invalid base" << std::endl;
    }

    return 0;
}