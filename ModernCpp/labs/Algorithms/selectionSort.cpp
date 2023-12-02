#include <iostream>
#include <array>

using namespace std;
  
//Swap function
void swap(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
}
 
void selectionSort(int arr[], int size) 
{ 
    int outer_idx, inner_idx, min_idx; 
    // One by one move boundary of 
    // unsorted subarray 
    for (outer_idx = 0; outer_idx < size-1; outer_idx++) 
    {    // Find the minimum element in 
        // unsorted array 
        min_idx = outer_idx; 
        for (inner_idx = outer_idx+1; inner_idx< size; inner_idx++) 
        {
            if (arr[inner_idx] < arr[min_idx]) 
            {
                min_idx = inner_idx; 
            }
        }  
        // Swap the found minimum element 
        // with the first element 
        swap(&arr[min_idx], &arr[outer_idx]); 
    } 
} 

void selectionSort(std::array<int,5> &arr) 
{ 
    int outer_idx, inner_idx, min_idx; 
    // One by one move boundary of 
    // unsorted subarray 
    for (outer_idx = 0; outer_idx < arr.size() -1; outer_idx++) 
    { 
        
        // Find the minimum element in 
        // unsorted array 
        min_idx = outer_idx; 
        for (inner_idx = outer_idx+1; inner_idx< arr.size(); inner_idx++) 
            if (arr[inner_idx] < arr[min_idx]) 
            min_idx = inner_idx; 
  
        // Swap the found minimum element 
        // with the first element 
        swap(&arr[min_idx], &arr[outer_idx]); 
    } 
} 
  
//Function to print an array
void printArray(int arr[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        cout << arr[i] << " "; 
    cout << endl; 
} 

void printArray(std::array<int, 5> arr) 
{ 
    int i; 
    for (i=0; i < arr.size(); i++) 
        cout << arr[i] << " "; 
    cout << endl; 
} 
  
// Driver program to test above functions 
int main() 
{ 
    int arr[] = {64, 25, 12, 22, 11}; 

    std::array<int,5> array_ =  {64, 25, 12, 22, 11}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
   // selectionSort(arr, n); 
    cout << "Sorted array: \n"; 
    selectionSort(array_);
    printArray(array_);    
    
    return 0; 
}