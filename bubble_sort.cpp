#include <vector>
void bubble_sort(std::vector<int>& arr)
{
    bool flag = false;

    for (int i{}; i < arr.size(); ++i) {
        for (int j{1}; j < arr.size() - i; ++j) {
            if (arr[j] < arr[j - 1]) {
                std::swap(arr[j], arr[j - 1]);
                flag = true;
            }
        }
        if (!flag) return;
    }
}