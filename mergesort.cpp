#include<iostream>
#include<vector>
using namespace std;
// Merge helper function
void merge(vector<int> &arr, int left, int mid, int right) {
    vector<int> temp;
    int i = left, j = mid + 1;

    // Merge two sorted halves
    while (i <= mid && j <= right) {
        if (arr[i] <= arr[j])
            temp.push_back(arr[i++]);
        else
            temp.push_back(arr[j++]);
    }

    // Copy remaining elements
    while (i <= mid)
        temp.push_back(arr[i++]);
    while (j <= right)
        temp.push_back(arr[j++]);

    // Copy back to original array
    for (int k = 0; k < temp.size(); ++k)
        arr[left + k] = temp[k];
}

// Recursive mergeSort function
void mergeSortRecursive(vector<int> &arr, int left, int right) {
    if (left >= right)
        return;

    int mid = left + (right - left) / 2;

    mergeSortRecursive(arr, left, mid);
    mergeSortRecursive(arr, mid + 1, right);

    merge(arr, left, mid, right);
}

// Wrapper function with signature you provided
void mergeSort(vector<int> &arr, int n) {
    mergeSortRecursive(arr, 0, n - 1);
}
