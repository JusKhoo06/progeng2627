#include <iostream> 
#include <vector> 
#include <string>

void find_word_in_line(
    const std::string & line, 
    const std::string & word,
    std::vector<int>& row_coordinates,
    std::vector<int>& column_coordinates,
    int row_column,
    int word_index,
    std::vector<int>& word_index_list,
    bool status
){

    int j=0;
    int m;

    for(int i=0; i< (int(line.size())-int(word.size())+1); i++){
        m=i;
        while((j<word.size())&&(line[m]==word[j])){
            m++;
            j++;
        }
        if(j==(word.size())){
            for(int k=0; k<word.size();k++){
                if(status){
                    j--;
                    row_coordinates.push_back(row_column);
                    column_coordinates.push_back(i+j);
                    
                }
                if(!status){
                    j--;
                    column_coordinates.push_back(row_column);
                    row_coordinates.push_back(i+j);
                                        
                }

            }
            j=0;
            word_index_list.push_back(word_index);

        }

    }

}

void row_checker(
    const std::string & line, 
    std::vector<int>& row_coordinates,
    std::vector<int>& column_coordinates,
    const std::vector<std::string>& words,
    int row, 
    std::vector<int>& word_index_list
){

    for(int i=0; i<words.size();i++){
        find_word_in_line(line, std::string(words[i]),row_coordinates,column_coordinates, row, i, word_index_list, true);
    }

}

std::string extract_column(
    const std::vector<std::string>& grid, 
    int column_index
){
    std::string column;
    for(int i=0; i<grid.size();i++){
        column.push_back(char(grid[i][column_index]));
    }

    return column;
}

void column_checker(
    const std::string & line, 
    std::vector<int>& row_coordinates,
    std::vector<int>& column_coordinates,
    const std::vector<std::string>& words,
    int column, 
    std::vector<int>& word_index_list){

    for(int i=0; i<words.size();i++){
        find_word_in_line(line, std::string(words[i]),row_coordinates,column_coordinates, column, i, word_index_list, false);
    }

}

void find_words(
    const std::vector<std::string>& grid, 
    const std::vector<std::string>& words,
    std::vector<std::string>& solution,
    std::vector<std::string>& not_found
){
    std::vector <int> row_coordinates {};
    std::vector <int> column_coordinates {};
    std::vector <int> word_index_list {};
    bool status = true;
    bool status_sol = true;
    std::string row_sol;


//check for rows
    for (int i=0;i<grid.size();i++){
        row_checker(std::string(grid[i]), row_coordinates, column_coordinates, words, i, word_index_list);
    }

//check for columns
    for (int i=0;i<(grid[0].size());i++){
        column_checker(extract_column(grid,i), row_coordinates, column_coordinates, words, i, word_index_list);
    }

//create std::vector<std::string> solution

    for(int row=0; row<grid.size();row++){
        for (int column=0; column<(grid[0].size()); column++){
            status_sol = true;
            for(int i=0; i<row_coordinates.size();i++){
                if((row == row_coordinates[i]) && (column == column_coordinates[i])){
                    status_sol = false;
                }
            }
            if (status_sol){
                row_sol.push_back('#');
            }
            else {
                row_sol.push_back(grid[row][column]);
            }
        }
        solution.push_back(row_sol);
        row_sol.clear();
    }



//create std::vector<std::string> not_found

    for(int i=0; i< words.size();i++){
        status=true;
        for(int j=0;j<word_index_list.size();j++){
            if(i == word_index_list[j]){
                status=false;
            }
        }
        if(status){
            not_found.push_back(words[i]);
        }
        
    }

}

int main(){

    std::vector<std::string> grid = {
        "xappleg",
        "dzeazkg",
        "zwazzbx",
        "dxnqzoy",
        "qyueytp",
        "pythtyg"
    };

    std::vector<std::string> words = {"peanut", "bot", "mango", "apple", "cinnamon"};
    std::vector<std::string> solution;
    std::vector<std::string> not_found;

    find_words(grid, words, solution, not_found); 

    std::vector<std::string> expected_solution = {
        "#apple#",
        "##e####",
        "##a##b#",
        "##n##o#",
        "##u##t#",
        "##t####"
    };

    std::vector<std::string> expected_not_found = {"mango", "cinnamon"};

    if( (solution == expected_solution) && (not_found == expected_not_found) ){
        std::cout << "test passed" << std::endl;
    }
    else{
        std::cout << "test failed" << std::endl;
    }

    std::cout << "solution:" << std::endl;
    for(int i = 0; i < solution.size(); i++){
        std::cout << solution[i] << std::endl;
    }

    std::cout << "not found:" << std::endl;
    for(int i = 0; i < not_found.size(); i++){
        std::cout << not_found[i] << std::endl;
    }





}