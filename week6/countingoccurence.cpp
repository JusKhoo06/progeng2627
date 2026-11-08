#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <string> 


int main(){

    std::ifstream infile; 
    infile.open("text.txt");

    if(!infile.is_open()){ 
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    std::string tmp;

    std::vector<std::string> text;
    while(infile >> tmp){
        text.push_back(tmp); 
        // instead of printing the values
        // as in the example above
        // first we store them in a vector
    }

    infile.close(); 

    std::ifstream infile2; 
    infile2.open("words.txt");

    if(!infile2.is_open()){ 
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    std::string tmp2;

    std::vector<std::string> words;
    while(infile2 >> tmp2){
        words.push_back(tmp2); 
        // instead of printing the values
        // as in the example above
        // first we store them in a vector
    }

    infile2.close(); 
    int count;

    std::vector<int> vcount;


    for (int i=0; i<words.size(); i++){
        count=0;

        for(int j=0; j<text.size(); j++){
            
            if(words[i]==text[j]){
                count=count+1;
            }
        }
        if (count!=0){
           vcount.push_back(count);
        }
    }

    std::ofstream outfile;
    outfile.open("wordcount.txt");

    if (!outfile.is_open()) {
        std::cerr << "Error: could not open output file.\n";
        return EXIT_FAILURE;
    }


    for(int i=0; i< words.size(); i++){
        outfile << words[i] << " :" << vcount[i] << std::endl;
    }

    return 0;
}