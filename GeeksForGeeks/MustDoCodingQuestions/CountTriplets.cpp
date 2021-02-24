#include<bits/stdc++.h>
using namespace std;

int countTriplet(int a[], int n)
{
	// Your code goes here
	sort(a, a+n);
	int triplets = 0;
	    
	for(int i=n-1; i>=0; i--){
	    int j = 0;
	    int k = i - 1;
	        
	    while(j < k){
	        int sum = a[j] + a[k];
	            
	        if(sum == a[i]){
	            triplets++;
	            j++;
	            k--;
	        }
	        else if(sum > a[i])
	            k--;
	        else
	            j++;
	    }
	}
	return triplets;
}