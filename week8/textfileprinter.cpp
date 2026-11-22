#include <iostream>
#include <string> 
#include <vector>
#include <cstdlib>
#include <fstream>

// argc is the number of command line arguments
// argv is an array of C-style strings
// we'll see what this means more in detail later on

int main(int argc, char* argv[]){

    std::vector <std::string> line;
    std::ifstream infile;

    infile.open(argv[1]);

    if(!infile.is_open()){ 
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    std::string tmp;

    while(infile >> tmp){
        line.push_back(tmp);
    }

    for(int i=0; i<line.size();i++){

        std::cout<< line[i]<< std::endl;

    }

    infile.close(); 

}