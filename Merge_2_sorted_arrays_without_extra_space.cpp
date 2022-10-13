#include <bits/stdc++.h> 
#include <bits/stdc++.h> 
vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	// Write your code here.
    for(int i=0;i<m;i++){
        if(arr1[i] > arr2[0]){
            int temp = arr1[i];
            arr1[i] = arr2[0];
            arr2[0] = temp;
            sort(arr2.begin(), arr2.end());
        }
    }
    int k = m;
    for(int i=0;i<n;i++){
        arr1[k++] = arr2[i];
    }
    return arr1;
}