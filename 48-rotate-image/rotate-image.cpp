class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
        //transpose kr do matrix ko 
        for(int i = 0 ; i < matrix.size(); i++){
            for(int j = 0 ; j < matrix[0].size(); j++){
                if(i > j){
                    swap(matrix[i][j], matrix[j][i]);
                }

            }
        }

        // reverse kar do har rows ko
        for(int i = 0 ; i < matrix.size(); i++)
            reverse(matrix[i].begin(), matrix[i].end());

        

    }
};