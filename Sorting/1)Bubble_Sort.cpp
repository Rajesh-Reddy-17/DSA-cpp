// Bubble Sort

// Time Complexity :-   
// Best Case: O(n)
// Average Case: O(n²)
// Worst Case: O(n²)

// Space Complexity: O(1)



// Worst Case :- 
#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[] , int n) {
    for(int i=0;i<n-1;i++) {
        for(int j=0;j<n-i-1;j++) {
            if(arr[j]>arr[j+1]) {
                swap(arr[j],arr[j+1]);
            }
        }
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

    bubbleSort(arr,n);
    printArray(arr,n);

    return 0;
}



/* Output :-
1 2 3 4 5 6 7 8 9
*/


/* Optimised Solution works if already sorted array is given otherwise it wont work */
// Time Complexity :- O(n)

#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[] , int n) {
    for(int i=0;i<n-1;i++) {
        bool isSwap = false;
        for(int j=0;j<n-i-1;j++) {
            if(arr[j]>arr[j+1]) {
                swap(arr[j],arr[j+1]);
                isSwap = true;
            }
        }
        if(!isSwap) {
            return;
        }
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

    bubbleSort(arr,n);
    printArray(arr,n);

    return 0;
}
