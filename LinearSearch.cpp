#include <iostream> 
using namespace std; 
  
int linearSearch(int *arr, int n, int x) 
{ 
    int i; 
    for (i = 0; i < n; i++) 
        if (arr[i] == x) 
            return i; 
    return -1; 
} 
  
int main() 
{ 
    int array[] = {7,2,1,6,8,5,3,4};
    int key; 
    int length = sizeof(array) / sizeof(array[0]); 
    cout << "Elements in the array : " << endl;
    for (int &values : array)
    {
        cout << " " <<values;
    }
    
    cout << endl;
    cout << "Enter the element you want to find the position of : ";
    cin >> key;
    int result = linearSearch(array, length, key); 
    (result == -1) ? cout << "Element is not present in array." 
                 : cout << "Element is present at index: " << result; 
    return 0;
}