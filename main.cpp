#include "merge_sort.h"
#include <iostream>
#include <vector>

int main() {
    using namespace std;

    // Przykład użycia funkcji Sort
    vector<int> array = {5, 2, 9, 1, 5, 6};
    
    cout << "Original array: ";
    for (int num : array) {
        cout << num << " ";
    }
    cout << endl;

    MergeSort::Sort(array);

    cout << "Sorted array: ";
    for (int num : array) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}