#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int Partition(int *array, int start, int end) {
    int pivot = array[end];
    int partitionIndex = start;
    for (int i = start; i < end; i++) {
        if (array[i] <= pivot) {
            swap(array[i], array[partitionIndex]);
            partitionIndex++;
        }
    }
    swap(array[partitionIndex], array[end]);
    return partitionIndex;
}

void QuickSort(int *array, int start, int end) {
    if (start < end) {
        int partitionIndex = Partition(array, start, end);
        QuickSort(array, start, partitionIndex - 1);
        QuickSort(array, partitionIndex + 1, end);
    }
}

int main() {
    int array[] = {7, 2, 1, 6, 8, 5, 3, 4};
    int length = sizeof(array) / sizeof(array[0]); 
    QuickSort(array, 0, length-1);
    for (int &values : array)
    {
        cout << " " <<values;
    }
    cout << endl;
}