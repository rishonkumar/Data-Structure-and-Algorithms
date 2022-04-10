#include<bits/stdc++.h>
using namespace std;
// lower bound - smallest number which is just 
//equal to and greater than the target number
int binarySearch(int a[], int n, int target) {

    int low = 0 , high = n-1;
    int ans = -1;
    while(low <= high) {

        int mid = low + (high - low)/2;

        if(a[mid] >= target) {
            ans = a[mid];
            high = mid-1;
        } 
        else
            low = mid+1;
    }
    return ans;
}


int main() {
 
int arr[] = { 2, 3, 5, 6,8,10,12 };
    int x = 4;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = binarySearch(arr,n, x);
    cout << result << endl;
}