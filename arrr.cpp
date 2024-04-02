#include <iostream>

int main() {
    const int size = 5; // Size of the array
    int numbers[size];  // Declare an array of integers

    // Input numbers into the array
    std::cout << "Enter " << size << " numbers:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cin >> numbers[i];
    }

    // Calculate the sum of the numbers
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += numbers[i];
    }

    // Output the sum
    std::cout << "Sum of the numbers: " << sum << std::endl;

    return 0;
}
