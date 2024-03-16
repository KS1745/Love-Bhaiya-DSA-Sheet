#include<bits/stdc++.h>
using namespace std;

long long maxSubarraySum(int arr[], int n){
        
        // Your code here
        
        long long sum = 0;
        long long maxi = LONG_MIN;
        for(int i=0; i<n; i++){
            sum += arr[i];
            
            if(sum > maxi){
                maxi = sum;
            }
            if(sum < 0){
                sum = 0;
            }
        }
        return maxi;
    }