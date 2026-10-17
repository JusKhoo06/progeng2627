#include <iostream>

int main(){
    int n;
    std::cin>> n;
    int step=0;
    int nmax=n;

    while(n!=1){
        if((n%2)==0){
            n=n/2;
        }
        else{
            n=(3*n)+1;
        }
        if(n>nmax){
            nmax=n;

        }
        std::cout<<n<<"\t";
        step=step+1;
    }
    std::cout<< "That took " << step << " steps to reach 1."<< std::endl;
    std::cout<< "Maximum number was " << nmax << std::endl;
}