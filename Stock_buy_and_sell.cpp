#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    // Write your code here.
    int n = prices.size();
    
    int min = INT_MAX, max = 0, fmax = 0;
    
    for(int i=0;i<n;i++){
        if(prices[i] < min){
            min = prices[i];
             max = 0;
        }
        else if(prices[i] > max){
            max = prices[i];
        }
        fmax = fmax < max-min ? max-min : fmax;
    }
    int profit = max - min;
    
    return fmax < 0 ? 0 : fmax;
}