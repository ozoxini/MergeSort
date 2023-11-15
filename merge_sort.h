#ifndef MERGE_SORT_H
#define MERGE_SORT_H

#include <vector>

namespace MergeSort {
    void Sort(std::vector<int>& array);
    void Merge(std::vector<int>& array, int left, int middle, int right);
}

#endif
