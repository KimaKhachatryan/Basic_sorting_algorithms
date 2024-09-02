#include <vector>

static void merge(std::vector<int>& vec, int start, int end, int mid)
{
    int left = start;
    int right = mid + 1;
    int index = 0;

    std::vector<int> v1(end - start + 1);

    while (left <= mid && right <= end) {
        if (vec[left] <= vec[right])  v1[index++] = vec[left++];
        else  v1[index++] = vec[right++];
    }

    while (left <= mid) v1[index++] = vec[left++];
    while (right <= end) v1[index++] = vec[right++];

    index = 0;
    for (int i = start; i <= end;) {
        vec[i++] = v1[index++];
    }

}

static void merge_sort(std::vector<int>& vec, int start, int end)
{
    int mid = start + (end - start) / 2;

    if (start < end) {
        merge_sort(vec, start, mid);
        merge_sort(vec, mid + 1, end);

        merge(vec, start, end, mid);
    }
}

void merge_sort(std::vector<int>& vec)
{
    merge_sort(vec, 0, vec.size() - 1);
}