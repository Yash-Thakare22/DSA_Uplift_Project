// https://leetcode.com/problems/kth-smallest-element-in-a-sorted-matrix/
class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        priority_queue<int,vector<int>,greater<int>>min;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                min.push(matrix[i][j]);
            }
        }
        int m=0;
        while(!min.empty()){
            m++;
            if(m==k){
                return min.top();
            }min.pop();
        }return -1;
    }
};