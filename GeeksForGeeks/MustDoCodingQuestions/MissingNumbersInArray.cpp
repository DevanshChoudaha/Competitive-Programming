#include<bits/stdc++.h>
using namespace std;

int MissingNumber(vector<int>& array, int n) {
    // Your code goes here
    int original = (n * (n+1)) / 2;
    int current = accumulate(array.begin(), array.end(), 0);
    
    return (original - current);
}