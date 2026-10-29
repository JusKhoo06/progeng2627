#include <iostream> 
#include <vector>

int min_vector_element(const std::vector<double>& vin){

    int min_value= vin[0];
    int min_i=0;

    if (vin.size()==0){
        return -1;
    }

    for(int i=0; i < vin.size();i++){
        if (vin[i]<min_value){
            min_value = vin[i];
            min_i = i;
        }
    }

    return min_i;

}

int main(){

    std::vector<double> v = {1.2, 3.4, 2.1, -2.4, -1.5, -4.8, 9, 32};
    std::cout << min_vector_element(v); 



}