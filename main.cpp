#include <vector>
#include <iostream>
#include "my_sort.h"

void printArray(const std::vector<int>& arr);

int main() {
    //std::vector<int> arr1 = {16, 43, 22, 22, 22, 1, 119}; // use this case for counting and radix sort
    std::vector<int> arr1 = {16, 43, 24, -5, 22, 0, 292, 1, 1, -9};
    std::vector<int> arr2 = arr1;
    std::vector<int> arr3 = arr1;
    std::vector<int> arr4 = arr1;
    std::vector<int> arr5 = arr1;
    std::vector<int> arr6 = arr1;
    std::vector<int> arr7 = arr1;

    std::cout << "Original array: ";
    printArray(arr1);

    insertion_sort(arr1);
    std::cout << "Sorted array using Insertion Sort: ";
    printArray(arr1);

    selection_sort(arr2);
    std::cout << "Sorted array using Selection Sort: ";
    printArray(arr2);

    bubble_sort(arr3);
    std::cout << "Sorted array using Bubble Sort: ";
    printArray(arr3 );

    merge_sort(arr4);
    std::cout << "Sorted array using Merge Sort: ";
    printArray(arr4);

    quick_sort(arr5);
    std::cout << "Sorted array using Quick Sort: ";
    printArray(arr5);

    // counting_sort(arr6);
    // std::cout << "Sorted array using Counting Sort: ";
    // printArray(arr6);

    // radix_sort(arr7);
    // std::cout << "Sorted array using Radix Sort: ";
    // printArray(arr7);

    return 0;
}

// Function to print an array
void printArray(const std::vector<int>& arr) {
    for (const int& val : arr) {
        std::cout << val << " ";
    }
    std::cout << std::endl;
}
