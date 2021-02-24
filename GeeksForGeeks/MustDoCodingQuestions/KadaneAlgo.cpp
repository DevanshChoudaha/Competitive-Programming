#include<bits/stdc++.h>
using namespace std;

int maxSubarraySum(int arr[], int n){
        
    // Your code here
    int current = arr[0];
    int overall = arr[0];
        
    for(int i=1; i<n; i++){
        current = max(arr[i], current+arr[i]);
        overall = max(overall, current);
    }
        
    return overall;
        
}