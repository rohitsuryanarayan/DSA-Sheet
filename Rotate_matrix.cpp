class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        //int n = sizeof(matrix[0])/sizeof(matrix[0][0]);
        int n = matrix[0].size();
        cout << "n is " << n << endl;
        n--;
        for(int j=0;j<(n+1/2);j++){
        for(int i=j;i<(n-j);i++){
        int a = j, b = i;
        int temp = matrix[b][n-a];
        matrix[b][n-a] = matrix[a][b];
        int temp1 = matrix[n-a][n-b];
        matrix[n-a][n-b] = temp;
        int temp2 = matrix[n-b][a];
        matrix[n-b][a] = temp1;
        matrix[a][b] = temp2;
    }
        }
    }
};