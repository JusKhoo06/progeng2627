#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <string> 


int main(){

    std::ifstream infile; 
    infile.open("advertisement.txt");

    if(!infile.is_open()){ 
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    std::string tmp;

    std::vector<std::string> ad;
    while(infile >> tmp){
        ad.push_back(tmp); 
        // instead of printing the values
        // as in the example above
        // first we store them in a vector
    }

    infile.close(); 

    std::ifstream infile2; 
    infile2.open("realmeaning.txt");

    if(!infile2.is_open()){ 
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    std::string tmp2;

    std::vector<std::string> realmeaning;
    while(infile2 >> tmp2){
        realmeaning.push_back(tmp2); 
        // instead of printing the values
        // as in the example above
        // first we store them in a vector
    }

    infile2.close();
    bool status; 

    for (int i=0; i<ad.size(); i++){
        status = true;

        for(int j=0; j<(realmeaning.size()-1); j++){
            
            if (status){
                if(realmeaning[j]==ad[i]){
                    ad[i]=realmeaning[j+1];
                    status = false;
                }
            }

        }
    }
    std::string outputfilename;
    std::cout << "Enter name of output file: ";
    std::cin >> outputfilename;

    std::ofstream outfile;
    outfile.open(outputfilename);

    if (!outfile.is_open()) {
        std::cerr << "Error: could not open output file.\n";
        return EXIT_FAILURE;
    }


    for(int i=0; i< ad.size(); i++){
        outfile << ad[i] << " ";
    }

    outfile.close(); 

    return 0;
}