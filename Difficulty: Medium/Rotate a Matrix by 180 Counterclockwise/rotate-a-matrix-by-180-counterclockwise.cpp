class Solution {
  public:
    void rotateMatrix(vector<vector<int>>& matrix) {
        // code here
        int n = matrix.size();
        for(int j = 0; j<n; j++){
            int start = 0, end = n-1;
            while(start<end){
                swap(matrix[start][j],matrix[end][j]);
                start++,end--;
            }
        }
        for(int i =0;i<n;i++){
            int start =0,end =n-1;
            while(start<end){
                swap(matrix[i][start],matrix[i][end]);
                start++,end--;
            }
        }
    }
};