#include <iostream>
#include <vector>

int main(){
    std::vector<int> sequence;
    std::vector<int> indices;
    int tmp = 1;
    int t,n;
    int count=0;

    std::cout << "Enter a number n: ";
    std::cin >> n;

    std::cout << "Enter numbers in the sequence until you have filled in " << n << " values." << std::endl;

    for (int i=0; i< n; i++){
        std::cin >> tmp; // we read a number
        sequence.push_back(tmp);
    }

    std::cout << "Enter a number t: ";
    std::cin >> t ;

    for(int i = 0; i < sequence.size(); i++){

        if (sequence[i] == t){
            indices.push_back(i);
            count++;
        }
    }
    std::cout << "There are " << count << " occurrences of " << t << " at indices: " << std::endl;
    
    for(int i=0; i<indices.size();i++){
        std::cout << indices[i] << std::endl;
    }

}