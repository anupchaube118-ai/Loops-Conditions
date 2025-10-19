#include <iostream>

int main() {
    std::cout << "Even numbers from 1 to 100:" << std::endl;

    for (int i = 1; i <= 100; i++) {
        if (i % 2 != 0) {
            continue;  // Skip odd numbers
        }
        std::cout << i << " ";
    }

    std::cout << std::endl; // Move to a new line at the end
    return 0;
}
