class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        vector<vector<int>> mat(n,vector<int>(n,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                mat[j][i]=matrix[i][j];
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                matrix[i][j]=mat[i][j];
            }
        }
        for(int i=0;i<n;i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }
};
