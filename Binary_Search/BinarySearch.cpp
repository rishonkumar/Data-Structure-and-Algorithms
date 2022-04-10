#include<bits/stdc++.h>
using namespace std;
 
int binarySearch(int a[], int n, int target) {

    int low = 0 , high = n-1;

    while(low <= high) {

        int mid = low + (high - low)/2;

        if(a[mid] == target) 
            return mid;
        
        if(a[mid] < target) 
            low = mid+1;
        
        else
            high = mid-1;
        
    }
    return -1;
}


int main() {
 
int arr[] = { 2, 3, 4, 10, 40 };
    int x = 10;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = binarySearch(arr,n, x);
    cout << result << endl;
}