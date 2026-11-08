#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

int main() {
    std::string filename;

    std::cout << "Enter the input file name: ";
    std::getline(std::cin, filename);

    std::ifstream infile(filename);

    if (!infile.is_open()) {
        std::cerr << "Error opening file: " << filename << std::endl;
        return EXIT_FAILURE;
    }

    int tmp;

    while (infile >> tmp) {
        std::cout << tmp << std::endl;
    }

    infile.close();

    return EXIT_SUCCESS;
}