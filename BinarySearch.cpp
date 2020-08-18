#include <iostream>
using namespace std;

int binarySearch(int *array, int low,int high,int key){
   while(low<=high){
      int mid=(low+high)/2;
      if(array[mid]<key){
         low=mid+1;
      }
      else if(array[mid]>key){
         high=mid-1;
      }
      else{
         return mid;
      }
   }
   return -1;
}

int main() {
    int array[] = {1,2,3,4,5,6,7,8};
    int notFound = -1;
    int key;
    int length = sizeof(array)/sizeof(array[0]); 
    cout << "Elements in the array :" << endl;
    for (int &values : array)
    {
        cout << " " <<values;
    }
    cout << endl;
    cout << "Enter the element you want to find the position of :";
    cin >> key;
    int foundValue = binarySearch(array, array[0], array[length-1], key);
    if ( foundValue == notFound)
        cout << "Element does not exist" << endl;
    else
        cout << "Element is present at index : " << foundValue << " in the array." << endl; 
    return 0;
}