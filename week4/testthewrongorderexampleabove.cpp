// this example won't work
// because function myabs 
// is not declared before the main
#include <iostream>

double myabs(double in){
    double abs;

    if(in < 0){ 
        abs = -in;
    }
    else{
        abs = in;
    }

    return abs;
}

//myabs is defined here at the start

int main(){
    double n;
    std::cout << "please enter a number" << std::endl;
    std::cin >> n;
    std::cout << "|" << n << "| = " << myabs(n) << std::endl;
    // function myabs is called here                        
}
// therefore the following code should be before the main
// otherwise it won't work


//by defining myabs earlier, main() recognises function myabs
