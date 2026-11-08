#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <string> 

int main(){

    std::string inputfilename;
    std::string outputfilename;
    // as usual not a special name
    std::cout << "enter name of input file" << std::endl;

    std::cin >> inputfilename;

    std::ifstream infile; 
    infile.open(inputfilename);

    if(!infile.is_open()){ 
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    std::cout << "Enter name of output file: ";
    std::cin >> outputfilename;

    std::ofstream outfile;
    outfile.open(outputfilename);

    if (!outfile.is_open()) {
        std::cerr << "Error: could not open output file.\n";
        return EXIT_FAILURE;
    }

    std::string line;

    while (std::getline(infile, line)) {
        outfile << line << '\n';
    }

    infile.close();
    outfile.close();

    std::cout << "File copied successfully.\n";

    return 0;
}