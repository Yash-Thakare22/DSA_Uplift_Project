class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) 
    {
     vector<int>r;
     int arr[2*n];
        for(int i=0;i<nums.size();i++)
        {
            arr[i]=nums[i];
        }
     int* p1;
     p1=&arr[0];
     for(int i=0;i<n;i++)
     {
      r.push_back(*(p1+i));
      r.push_back(*(p1+i+n));
     }
        return r;
    }
};
