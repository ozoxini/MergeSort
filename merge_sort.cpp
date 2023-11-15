#include "merge_sort.h"

namespace MergeSort {
    void Sort(std::vector<int>& array) {
        if (array.size() <= 1) {
            return;
        }

        int middle = array.size() / 2;
        std::vector<int> left(array.begin(), array.begin() + middle);
        std::vector<int> right(array.begin() + middle, array.end());

        Sort(left);
        Sort(right);
        Merge(array, left, right);
    }

    void Merge(std::vector<int>& array, int left, int middle, int right) {
        int left_size = middle - left + 1;
        int right_size = right - middle;

        std::vector<int> left_array(left_size);
        std::vector<int> right_array(right_size);

        for (int i = 0; i < left_size; i++) {
            left_array[i] = array[left + i];
        }

        for (int j = 0; j < right_size; j++) {
            right_array[j] = array[middle + 1 + j];
        }

        int i = 0, j = 0, k = left;

        while (i < left_size && j < right_size) {
            if (left_array[i] <= right_array[j]) {
                array[k] = left_array[i];
                i++;
            } else {
                array[k] = right_array[j];
                j++;
            }
            k++;
        }

        while (i < left_size) {
            array[k] = left_array[i];
            i++;
            k++;
        }

        while (j < right_size) {
            array[k] = right_array[j];
            j++;
            k++;
        }
    }
}
