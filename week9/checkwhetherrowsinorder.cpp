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

bool rows_in_order(const std::vector<std::vector<int>> &matrix, int &row){

    bool isnotallzero = false;

    for(int i=0; i<matrix.size()-1;i++){
        for(int j=0;j<matrix[i].size();j++){
            if((next_binary(matrix[i]))[j]==1){
                isnotallzero = true;
            }
        }
        if(isnotallzero){
            if (next_binary(matrix[i]) != matrix[i+1]){
                row=i+1;
                return false;
            }
        }
        else{
            row=i+1;
            return false;
        }
    }
    return true;



}

int main() {
    std::vector<std::vector<int>> matrix = {
        {0, 1, 0, 1, 0},
        {0, 1, 0, 1, 1},
        {0, 1, 1, 0, 0},
        {0, 1, 1, 0, 1},
        {0, 1, 1, 1, 0},
        {0, 1, 1, 1, 1},
        {1, 0, 0, 0, 1},
        {1, 0, 0, 0, 0},
        {1, 0, 0, 1, 0}
    };

    int row = -1;

    if (rows_in_order(matrix, row)) {
        std::cout << "Rows are in order" << std::endl;
    } else {
        std::cout << "Rows are not in order" << std::endl;
        std::cout << "First incorrect row: " << row << std::endl;
    }

    return 0;
}