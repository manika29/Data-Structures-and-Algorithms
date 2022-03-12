class Solution {
public:
    
    void Transpose(vector<vector<int>>& matrix){
        int n=matrix.size();
        for(int i=0; i<n; i++){
            for (int j=0; j<n; j++){
                if(i<j)
                    swap(matrix[i][j],matrix[j][i]);
            }
        }
    }
    
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        
        Transpose(matrix);
        
        int startCol=0;
        int endCol=n-1;
        
        while(startCol<endCol){
            for(int index=0; index<n; index++){
                swap(matrix[index][startCol],matrix[index][endCol]);
            }
            startCol++;
            endCol--;
        }
    }
};