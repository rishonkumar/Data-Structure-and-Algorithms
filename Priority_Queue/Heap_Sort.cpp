#include<bits/stdc++.h>
using namespace std;

void heapify(int arr[], int n, int i) {

    int largest = i;
    int left = 2*i;
    int right = 2*i+1;

    if(left <= n && arr[largest] < arr[left]) {
        largest = left;
    }   

    if(right <= n && arr[largest] < arr[right]) {
        largest = right;
    }
    // if the pointer is changed that means take node
    // to its right position
    if(largest != i) {
        swap(arr[largest],arr[i]);
        //to check its children nodes also
        heapify(arr,n,largest);
    }
}

void heapSort(int arr[], int n) {

    int size = n;

    while(size > 1) {
        
        //s1: swap
        swap(arr[size],arr[1]);
        size--;

        //s2
        heapify(arr, size, 1);


    }
}
 
int main() {

    int arr[6] = {-1,54,53,55,52,50};
    int n = 5;

    heapSort(arr, n);

    for(int i = 1; i <= n ; i++) {
    cout << arr[i] << " , ";
    }
    cout << endl;
 
 
}