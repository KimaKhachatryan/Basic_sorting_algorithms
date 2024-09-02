#include <vector>
#include <ctime>
#include <cstdlib>

enum Pivot {
    FIRST  = 1,
    LAST,
    MIDDLE,
    RANDOM
};

static int choose_pivot(std::vector<int>& vec, int first, int last, Pivot pivot_type = RANDOM)
{
    if (pivot_type == FIRST) {
        std::swap(vec[first], vec[last]);
        return vec[last];
    } else if (pivot_type == LAST) {
        return vec[last];
    } else if (pivot_type == MIDDLE) {
        int mid = first + (last - first) / 2;
        std::swap(vec[mid], vec[last]);
        return vec[last];
    }

    srand(time(0));
    return vec[first + rand() % (last - first + 1)];
}

static int partition(std::vector<int>& vec, int first, int last)
{
    int i = first - 1;
    int j = last + 1;
    int pivot = choose_pivot(vec, first, last);

    while (true) {
        do {
            ++i;
        } while (vec[i] < pivot);

        do {
            --j;
        } while (vec[j] > pivot);
        
        if (i >= j) return j;
        
        std::swap(vec[i], vec[j]);

    } 
}

static void quick_sort(std::vector<int>& vec, int first, int last)
{
    if (first < last) 
    {
        int part = partition(vec, first, last);

        quick_sort(vec, first, part - 1);
        quick_sort(vec, part + 1, last);
    }
}

void quick_sort(std::vector<int>& vec)
{
    quick_sort(vec, 0, vec.size() - 1);
}