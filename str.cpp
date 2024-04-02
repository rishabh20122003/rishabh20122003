#include <iostream>
#include <string>
#include <sstream>

int main() {
    std::string input;
    std::cout << "Enter numbers separated by spaces: ";
    std::getline(std::cin, input);

    std::stringstream ss(input);
    int sum = 0;
    int num;

    // Read each number from the stringstream and add it to the sum
    while (ss >> num) {
        sum += num;
    }

    std::cout << "Sum of the numbers: " << sum << std::endl;

    return 0;
}
