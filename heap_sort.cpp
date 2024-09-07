#include <vector>

static void heapify(std::vector<int>& vec, int size, int index)
{
    int largest = index;
    int left = index * 2 + 1;
    int right = index * 2 + 2;

    if (left < size && vec[left] > vec[largest]) {
        largest = left;
    }

    if (right < size && vec[right] > vec[largest]) {
        largest = right;
    }

    if (largest != index) {
        std::swap(vec[index], vec[largest]);
        heapify(vec, size, largest);
    }
}

void heap_sort(std::vector<int>& vec)
{
    int size = vec.size();
    for (int i = size / 2 - 1; i >= 0; --i) {
        heapify(vec, size, i);
    }

    for (int i = size - 1; i > 0; --i) {
        std::swap(vec[i], vec[0]);

        heapify(vec, i, 0);
    }
}