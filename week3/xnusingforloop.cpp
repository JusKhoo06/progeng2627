#include <iostream>

int main(){
    int x,n,result;
    std::cin >> x >> n;
    result = x;
    for(int i = 1; i < n; i++){
        result = result * x;
    }
    std::cout << result << std::endl;

}