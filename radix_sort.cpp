#include <vector>
#include <algorithm>

static void counting_sort(std::vector<int>& vec, int exp)
{ 
    int size = vec.size();
    std::vector<int> count(10, 0);
    std::vector<int> output(size);

    for (int i = 0; i < size; ++i) {
        ++count[(vec[i] / exp) % 10];
    }

    for (int i = 1; i < 10; ++i) {
        count[i] += count[i - 1];
    }

    for (int i = size - 1; i >= 0; --i) {
        output[--count[(vec[i] / exp) % 10]] = vec[i];
    }

    vec = std::move(output);
}

void radix_sort(std::vector<int>& vec)
{   
    int max = *std::max_element(vec.begin(), vec.end());

    for(int exp = 1; max / exp > 0; exp *= 10) {
        counting_sort(vec, exp);
    }

}

