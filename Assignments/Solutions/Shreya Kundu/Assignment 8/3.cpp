class Solution{
    public:
        vector<int> findElements(int a[], int n)
    {
        // Your code goes here 
        sort(a,a+n);
        vector<int>ans;
        for(int i=0;i<n-2;i++)
          ans.push_back(a[i]);
        return ans;
    }
};

//Time complexity of std::sort()    O(n*log n)
//Space complexity of std::sort()    O(log n)
