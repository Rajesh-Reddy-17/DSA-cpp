// Selection Sort

// Time Complexity :-
// Best Case: O(n²)
// Average Case: O(n²)
// Worst Case: O(n²)

// Space Complexity: O(1)



#include<bits/stdc++.h>
using namespace std;

void selectionSort(int arr[] , int n) {
    for(int i=0;i<n-1;i++) {
        int smallestIndex = i;
        for(int j=i+1;j<n;j++) {
            if(arr[j]<arr[smallestIndex]) {
                smallestIndex = j;
            }
        }
        swap(arr[i],arr[smallestIndex]);
    }
}

void printArray(int arr[] , int n) {
    for(int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }
}

int main() {
    int n=9;
    int arr[] = {9,4,7,2,8,1,5,3,6};

    selectionSort(arr,n);
    printArray(arr,n);

    return 0;
}
