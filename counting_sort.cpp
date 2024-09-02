#include <vector>
#include <algorithm>

void counting_sort(std::vector<int>& vec)
{
    int max = *(std::max_element(vec.begin(), vec.end()));

    std::vector<int> count(++max, 0);

    for (int i = 0; i < vec.size(); ++i) {
        ++count[vec[i]];
    }

    for (int i = 1; i < max; ++i) {
        count[i] += count[i - 1];
    }

    std::vector<int> result(vec.size(), 0);

    for (int i = 0; i < vec.size(); ++i) {
        result[--count[vec[i]]] = vec[i];
    }

    vec = std::move(result);
}