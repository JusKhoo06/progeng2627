#include <iostream>
#include <vector>

std::vector<int> next_binary(std::vector<int> num){
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
    return num;

}


int largest_gap(const std::vector<std::vector<int>> &matrix){

    int gap=0;
    int largest_gap=0;
    int k=0;
    std::vector<int>ongoing_matrix = matrix[0];

    while(ongoing_matrix != matrix[matrix.size()-1]){
        while(ongoing_matrix!= matrix[k]){
            gap++;
            ongoing_matrix = next_binary(ongoing_matrix);
        }
        if (largest_gap<gap){
            largest_gap = gap;
        }
        ongoing_matrix = next_binary(ongoing_matrix);
        k++;
        gap=0;

        if(k>matrix.size()-1){
            return largest_gap;

        }

    }

    return largest_gap;

}

int main() {
    std::vector<std::vector<int>> matrix = {
        {0, 0, 0, 0}, // 0
        {1, 1, 1, 1}  // 15; fourteen numbers are missing
    };

    int gap = largest_gap(matrix);

    std::cout << "Largest gap: " << gap << std::endl;

    return 0;
}