#include<bits/stdc++.h>
using namespace std;

vector<int> subarraySum(int arr[], int n, int s){
    
    // Your code here
    int l = 0;
    int r = 0;
    int acc_sum = 0;
    vector<int> res;
    
    while(r <= n){
        if(acc_sum == s){
            res.push_back(l+1);
            res.push_back(r);
            return res;
        }
        
        if(l==r || acc_sum<s){
            r++;
            acc_sum += arr[r-1];
        }
        else{
            l++;
            acc_sum -= arr[l-1];
        }
    }
    res.push_back(-1);
    return res;
    
}