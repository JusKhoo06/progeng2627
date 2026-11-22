#include <iostream>
#include <vector>

std::vector<unsigned long> catalan_numbers(int n){

    std::vector<unsigned long> numbers{1};
    
    for(int i=1; i<n+1; i++){
        int c=0;
        int num=i;
        for(int j=0; j<i; j++){
            c=c+(numbers[j]*numbers[num-1]);
            num=num-1;
        }
        numbers.push_back(c);

    }

    return numbers;


}

int main() {
    int n;

    std::cout << "Enter n: ";
    std::cin >> n;

    std::vector<unsigned long> numbers = catalan_numbers(n);

    for (int i = 0; i < numbers.size(); i++) {
        std::cout << "C" << i << " = " << numbers[i] << std::endl;
    }

    return 0;
}