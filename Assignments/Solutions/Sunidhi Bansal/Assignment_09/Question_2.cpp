// count-negative-numbers-in-a-sorted-matrix

class Solution {
public:
    int count_zero(vector<int> vect) {
        int count = 0;
        for (int i = 0; i < vect.size(); i++) {
            if (vect[i] < 0) {
               count++; 
            }
        }
        return count;
    }
    int countNegatives(vector<vector<int>>& grid) {
        int total = 0;
        for (int i = 0; i < grid.size(); i++) {
            total += count_zero(grid[i]);
        }
        return total;
    }
};