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
