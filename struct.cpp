#include <iostream>
#include <string>
#include <sstream>

struct NumberArray {
    int numbers[100];
    int size;
};

int main() {
    NumberArray arr;
    arr.size = 0;

    std::string input;
    std::cout << "Enter numbers separated by spaces: ";
    std::getline(std::cin, input);

    std::stringstream ss(input);
    int num;

    // Read each number from the stringstream and store it in the array
    while (ss >> num && arr.size < 100) {
        arr.numbers[arr.size++] = num;
    }

    // Calculate the sum of the numbers
    int sum = 0;
    for (int i = 0; i < arr.size; ++i) {
        sum += arr.numbers[i];
    }

    std::cout << "Sum of the numbers: " << sum << std::endl;

    return 0;
}
