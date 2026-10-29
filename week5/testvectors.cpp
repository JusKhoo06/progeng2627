#include <iostream>
#include <vector>
// this header is needed to use vectors

int main(){
    std::vector<int> v; 

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    std::cout << v[0]*(v[1]+v[2]) << std::endl;

}

