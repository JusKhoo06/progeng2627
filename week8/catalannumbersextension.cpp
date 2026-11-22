#include <iostream>
#include <vector>
#include <fstream>
#include <string>

int catalan_numbers(int n){

    std::vector<unsigned long> numbers{1};
    
    for(int i=1; i<n+1; i++){
        int c=0;
        int num=i;
        for(int j=0; j<i; j++){
            c=c+(numbers[j]*numbers[num-1]);
            num=num-1;
        }
        numbers.push_back(c);

    }

    return numbers[n];


}

int main() {

    std::vector <int> n;
    std::vector <int> catalan;
    std::vector <std::string> expression;
    std::ifstream infile; 
    infile.open("expressions.txt");

    if(infile.is_open()){ 
        std::string tmp;
        int count=0;
        while(infile >> tmp){
            for (int i=0; i<tmp.size();i++){
                if(char(tmp[i])=='+'||char(tmp[i])=='-'||char(tmp[i])=='*'||char(tmp[i])=='/'){
                    count++;
                }
            }
            n.push_back(count);
            expression.push_back(tmp);
            count=0;

        }

        infile.close(); 

    }
    else{
        std::cout << "error opening file" << std::endl;
    }

    for (int i=0; i<n.size();i++){
        catalan.push_back(catalan_numbers(n[i]));
    }

    std::ofstream outfile("expression_counts.txt");

    if (!outfile.is_open()) {
        std::cout << "Error opening output file\n";
        return 1;   
    }
    for (std::size_t i = 0; i < n.size(); i++) {
        outfile << expression[i] << '\t' << catalan_numbers(n[i]) << '\n';
    }

    outfile.close();
    

    return 0;


}