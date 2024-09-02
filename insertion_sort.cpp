#include <vector>
#include <iostream>

void insertion_sort(std::vector<int>& arr)
{
    int key, i, j;
    for (i = 1; i < arr.size(); ++i) {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = key;
    }
}