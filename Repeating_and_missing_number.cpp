#include <bits/stdc++.h> 
#include <bits/stdc++.h> 

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
    // Write your code here
    long Sum = 0, SqSum = 0, ActualSum = 0, ActualSqSum = 0;
    for(int i=0;i<n;i++){
        Sum += (i+1);
        SqSum += ((i+1)*(i+1));
        ActualSum +=arr[i];
        ActualSqSum += (arr[i]*arr[i]);
    }
    
    //get a-b
    int diff = ActualSum - Sum;
    int SqDiff = ActualSqSum - SqSum;
    
    //cout << "sum is " << diff << " and " << SqSum << endl;
    
    int sum = SqDiff/diff;
    
    
    
    int a = (diff+sum)/2;
    int b = sum - a;
    
    for(int i=0;i<n;i++){
        if(arr[i] == a){
            pair<int, int> p = make_pair(b,a);
            return p;
        }
    }
    pair<int, int> p = make_pair(a,b);
    return p;
}
