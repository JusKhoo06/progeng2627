#include <iostream>

int main() {
    int x,n;
    int result = 0;

    std::cout << "Enter x and n: ";
    std::cin >> x >> n;

    for (int i = 0; i < n; ++i) {
        result += x;
    }

    std::cout << "Result: " << result << '\n';

    return 0;
}