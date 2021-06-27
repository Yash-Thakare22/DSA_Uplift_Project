class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int i;
        int *a,*b;
        vector<int>vec;
        a=&nums[0];
        b=&nums[n];
        for(i=0;i<2*n;i++)
         {if(i%2==0)
         {vec.push_back(*a);
           a++;}
          else
          {vec.push_back(*b);
          b++;}
          }
         
      
        return vec;
        
    }
};
