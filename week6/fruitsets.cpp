#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <string> 

void union_vector(const std::vector<std::string>& w1, const std::vector<std::string>& w2, std::vector<std::string>& vunion){

    for (int i=0; i< w1.size();i++){
        vunion.push_back(w1[i]);
    }
    for (int i=0; i< w2.size();i++){
        bool status=true;
        for (int j=0; j< w1.size();j++){
            if(w1[j]==w2[i]){
                status = false;
            }
        }
        if (status){
            vunion.push_back(w2[i]);
        }
    }
}

void intersection_vector(const std::vector<std::string>& w1, const std::vector<std::string>& w2, std::vector<std::string>& vintersection){

    for (int i=0; i< w2.size();i++){
        bool status=false;
        for (int j=0; j< w1.size();j++){
            if(w1[j]==w2[i]){
                status = true;
            }
        }
        if (status){
            vintersection.push_back(w2[i]);
        }
    }
}


int main(){

    std::ifstream infile; 
    infile.open("warehouse1.txt");

    if(!infile.is_open()){ 
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    std::string tmp;

    std::vector<std::string> w1;
    while(infile >> tmp){
        w1.push_back(tmp); 
        // instead of printing the values
        // as in the example above
        // first we store them in a vector
    }

    infile.close(); 

    std::ifstream infile2; 
    infile2.open("warehouse2.txt");

    if(!infile2.is_open()){ 
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    std::string tmp2;

    std::vector<std::string> w2;
    while(infile2 >> tmp2){
        w2.push_back(tmp2); 
        // instead of printing the values
        // as in the example above
        // first we store them in a vector
    }

    infile2.close(); 

    std::vector<std::string> vunion;
    std::vector<std::string> vintersection;

    union_vector(w1, w2, vunion);
    intersection_vector(w1, w2, vintersection);




    std::ofstream outfile;
    outfile.open("union.txt");

    if (!outfile.is_open()) {
        std::cerr << "Error: could not open output file.\n";
        return EXIT_FAILURE;
    }


    for(int i=0; i< vunion.size(); i++){
        outfile << vunion[i] << std::endl;
    }

    outfile.close();

    std::ofstream outfile2;
    outfile2.open("intersection.txt");

    if (!outfile2.is_open()) {
        std::cerr << "Error: could not open output file.\n";
        return EXIT_FAILURE;
    }


    for(int i=0; i< vintersection.size(); i++){
        outfile2 << vintersection[i] << std::endl;
    }

    outfile2.close();


    return 0;
}