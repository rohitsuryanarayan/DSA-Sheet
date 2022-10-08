class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if(intervals.size() <= 1)   return intervals;
        int n = intervals.size();
        sort(intervals.begin(), intervals.end());
        
        vector<vector<int>> result;
        result.push_back(intervals[0]);
        
        int k = 0;
        
        for(int i=1;i<n;i++){
            if(result[k][1] >= intervals[i][0] && result[k][1] <= intervals[i][1]){
                vector<int> temp{result[k][0], intervals[i][1]};
                result.pop_back();
                result.push_back(temp);
            }
            else if(result[k][1] < intervals[i][0]){
                result.push_back(intervals[i]);
                k++;                
            }
        }
        return result;
    }
};