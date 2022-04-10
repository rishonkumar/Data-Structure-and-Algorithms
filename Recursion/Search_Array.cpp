#include<bits/stdc++.h>
using namespace std;

bool checkNumber(int input[], int size, int x) {
  
  if(size == 0) 
    return false;

  if(input[0] == x)
    return true;

  bool smallOutput = checkNumber(input+1,size-1,x);

  return smallOutput;
}

  
bool helper(int arr[] , int x , int idx , int n) {

  if(idx == n) 
      return false;
  
  if(arr[idx] == x)
    return true;

  return helper(arr,x,idx+1,n);

}

bool checkNumber2(int input[], int size, int x) {
  
  return helper(input,x,0,size);
}