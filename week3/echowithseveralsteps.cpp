#include <iostream>
#include <string>

int main() {
    std::string input;

    while (true) {
        std::cin >> input;

        if (input == "STOP" || input == "stop" || input == "Stop") {
            break;
        }
        std::cout << input << std::endl;
    }


    return 0;
}