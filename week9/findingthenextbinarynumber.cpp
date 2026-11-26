#include <iostream>
#include <vector>

void next_binary(std::vector<int> &num){
    int carryout = 0;
    if (num[num.size()-1]==1){
        num[num.size()-1]=0;
        carryout=1;
    }
    else{
        num[num.size()-1]=1;
    }
    for(int i=num.size()-2; i > -1;i--){

        if((num[i]==1) && (carryout==1)){
            num[i]=0;
        }
        else if((num[i]==0) && (carryout==1)){
            num[i]=1;
            carryout=0;
        }


    }

}


int main() {
    std::vector<int> number = {1, 1, 1, 1};

    next_binary(number);

    for (int i = 0; i < number.size(); i++) {
        std::cout << number[i];
    }

    std::cout << std::endl;

    return 0;
}