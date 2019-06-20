#include <cstdlib>
#include <iostream>
#include <algorithm>
using namespace std;

void heapify(int arr[], int n, int i) 
{ 
    int largest = i; // Initialize largest as root 
    int l = 2*i + 1; // left = 2*i + 1 
    int r = 2*i + 2; // right = 2*i + 2 
  
    // If left child is larger than root 
    if (l < n && arr[l] > arr[largest]) 
        largest = l; 

    // If right child is larger than largest so far 
    if (r < n && arr[r] > arr[largest]) 
        largest = r; 
  
    // If largest is not root 
    if (largest != i) 
    { 
        swap(arr[i], arr[largest]); 
  
        // Recursively heapify the affected sub-tree 
        heapify(arr, n, largest); 
    }
} 

void make_heap(int arr[], int n)
{
    // Build heap (rearrange array)
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);
}

void Print_Array(int A[], int a_length)
{
    for(int i = 0 ; i < a_length - 1 ; i++)
    {
        cout << A[i] << ",";
    }
    cout << A[a_length-1] << endl;
}

void Heap_Sort(int A[], int a_length)
{
    for(int i = 0 ; i < a_length-1 ; i++)
    {
        //Make Heap
        make_heap(A,a_length-i);
        
        //Pop Element (Throw at End of Array)
        int max = A[0];
        A[0] = A[(a_length-1)-i];
        A[(a_length-1)-i] = max;
    }
}

// Sorts and Prints an Arbitrary Array
int main()
{
    int A[] = {3,2,1,5,4,10,3,1,0,33,6};
    int a_length = ( sizeof(A)/sizeof(A[0]) );
    
    Heap_Sort(A,a_length);
    Print_Array(A,a_length);

return 0;
}












