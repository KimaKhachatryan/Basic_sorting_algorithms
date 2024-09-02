#include <vector>

void selection_sort(std::vector<int>& arr)
{
    for (int i = 0; i < arr.size(); ++i) {
        int min_index = i;
        for (int j = i; j < arr.size(); ++j) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }
        std::swap(arr[i], arr[min_index]);
    }
}