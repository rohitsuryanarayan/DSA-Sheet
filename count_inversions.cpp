#include <bits/stdc++.h> 


long long merge(long long *arr, long long *temp, int l, int m, int r){
    long long ans = 0;
    int i = l;
    int j = m+1;
    int k = l;
    
    while((i<=m) && (j<=r)){
        if(arr[i] < arr[j])
            temp[k++] = arr[i++];
        else
        {
            temp[k++] = arr[j++];
            ans += (m-i+1);
        }
    }
    
    while(i<=m){
        temp[k++] = arr[i++];
    }
    while(j<=r){
        temp[k++] = arr[j++];
    }
    
    for(i=l;i<=r;i++){
        arr[i] = temp[i];
    }
    
    return ans;
}

long long mergeSort(long long *arr, long long *temp, int l, int r){
    if(l == r){
        return 0;
    }
    long long ans = 0;
    int m = (l+r)/2;
    ans += mergeSort(arr, temp, l, m);
    ans += mergeSort(arr, temp, m+1, r);
    ans += merge(arr, temp, l, m, r);
    
    return ans;
}
long long getInversions(long long *arr, int n){
    // Write your code here.
    long long temp[n];
    long long ans = mergeSort(arr, temp, 0, n-1);
    return ans;
}