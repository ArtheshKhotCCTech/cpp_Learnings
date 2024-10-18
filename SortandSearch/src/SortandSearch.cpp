#include <iostream>
#include "../HeaderFiles/MySort.h"
#include "../HeaderFiles/MySearch.h"

int main() {
    int n, target;

    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    int* arr = new int[n];

    std::cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    MySort sorter;
    sorter.bubbleSort(arr, n);

    std::cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Enter the element to search for: ";
    std::cin >> target;

    MySearch searcher;
    int index = searcher.binarySearch(arr, n, target);

    if (index != -1) {
        std::cout << "Element found at index " << index << std::endl;
    }
    else {
        std::cout << "Element not found." << std::endl;
    }

    delete[] arr;
    return 0;
}
