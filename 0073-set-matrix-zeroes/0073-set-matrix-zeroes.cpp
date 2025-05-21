typedef vector< tuple<int, int> > my_tuple;

class Solution {
public:
    my_tuple zeroes;

    void setZeroes(vector<vector<int>>& matrix) {
        int height = matrix.size();
        int width = matrix[0].size();
        for(int i = 0; i < height; ++i){
            for(int j = 0; j < width; ++j){
                if(matrix[i][j] == 0){
                    zeroes.push_back(tuple<int, int>(i,j));
                }
            }
        }
        for(int i = 0; i < zeroes.size(); ++i){
            handleZeroCell(get<0>(zeroes[i]), get<1>(zeroes[i]), matrix);
        }

    }

    void handleZeroCell(int i, int j, vector<vector<int>>& matrix){
        for(int idx = 0; idx < matrix[i].size(); ++idx){
            matrix[i][idx] = 0;
        }
        for(int idx = 0; idx < matrix.size(); ++idx){
            matrix[idx][j] = 0;
        }
    }
};