#include <iostream>
using namespace std;

int main() {
    // Declaration and initialization of an array of integers
    int arr[5] = {1, 2, 3, 4, 5};

    // Accessing and modifying elements of the array
    std::cout << "Elements of the array: ";
    for (int i = 0; i < 5; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    // Modifying an element of the array
    arr[2] = 10;

    // Accessing elements using a loop and pointer arithmetic
    std::cout << "Elements of the array using pointers: ";
    for (int *ptr = arr; ptr < arr + 5; ++ptr) {
        std::cout << *ptr << " ";
    }
    std::cout << std::endl;

    return 0;
}

