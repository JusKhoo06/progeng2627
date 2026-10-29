#include <iostream> 
#include <vector>

int search_vector(int n, const std::vector<int>& vin){

    for(int i=0; i < vin.size();i++){
        if (vin[i]==n){
            return i;
        }
    }

    return -1;

}

int main(){

    std::vector<int> v = {1, 4, 2, -2, -1, -4, 9, 32};
    std::cout << search_vector(9,v)<<std::endl; 
    std::cout << search_vector(1,v)<<std::endl; 
    std::cout << search_vector(32,v)<<std::endl; 
    std::cout << search_vector(4,v)<<std::endl; 

}