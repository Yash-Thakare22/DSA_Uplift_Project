// https://leetcode.com/problems/kth-largest-element-in-a-stream/
class KthLargest {
public:
    priority_queue<int,vector<int>,greater<int>>min;
    int s;
    KthLargest(int k, vector<int>& nums) {
        s =  k;
        for(int i=0;i<nums.size();i++){
            min.push(nums[i]);
            if(min.size()>k){
                min.pop();
            }
        }
    }
    
    int add(int val) {
        min.push(val);
        if(min.size()>s){
            min.pop();
        }
        return min.top();
    }
};