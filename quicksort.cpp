#include <bits/stdc++.h>
using namespace std;

// Partition function using Hoare's scheme
int custpartition(int* arr, int low, int high) {
    int left = low;
    int right = high;
    int pivotitem = arr[low];

    while (left < right) {
        // Move left pointer until element is > pivot
        while (left <= high && arr[left] <= pivotitem)
            left++;

        // Move right pointer until element is <= pivot
        while (right >= low && arr[right] > pivotitem)
            right--;

        // Swap if valid
        if (left < right)
            swap(arr[left], arr[right]);
    }

    // Put pivot in its correct position
    swap(arr[low], arr[right]);
    return right;
}

// Recursive quicksort
void qs(int* arr, int low, int high) {
    if (low >= high)
        return;

    int pivot = custpartition(arr, low, high);
    qs(arr, low, pivot - 1);
    qs(arr, pivot + 1, high);
}

// Wrapper function for vector input
vector<int> quickSort(vector<int> arr) {
    if (!arr.empty())
        qs(arr.data(), 0, arr.size() - 1);
    return arr;
}
