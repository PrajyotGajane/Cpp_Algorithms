#include <iostream>
using namespace std;

void display(int *array, int size) {
   for(int i = 0; i<size; i++)
      cout << array[i] << " ";
   cout << endl;
}

void insertionSort(int *array, int size) {
   int value, hole;
   for(int i = 1; i < size; i++) {
      value = array[i];
      hole = i;
      while(hole > 0 && array[hole-1] > value) {
         array[hole] = array[hole-1];
         hole--;
      }
      array[hole] = value;
   }
}

int main() {
   int arr[] = {7,2,1,6,8,5,3,4};
   int n = sizeof(arr)/sizeof(arr[0]);
   cout << "Array before Sorting: ";
   display(arr, n);
   insertionSort(arr, n);
   cout << "Array after Sorting: ";
   display(arr, n);
}