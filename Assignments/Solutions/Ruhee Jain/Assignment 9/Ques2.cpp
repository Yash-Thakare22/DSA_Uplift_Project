/*

Ques 2

SEARCHING: https://leetcode.com/problems/count-negative-numbers-in-a-sorted-matrix/

*/
class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int count=0;
        int m=grid.size();
        int n=grid[0].size();
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j]<0){
                    count++;
                }
            }
        }
        return count;
    }
};


