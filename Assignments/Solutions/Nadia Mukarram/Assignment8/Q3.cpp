

class Solution{
    public:
        vector<int> findElements(int a[], int n)
    {
        // Your code goes here
        sort(a,a+n);
            vector<int> r;
            for(int i=0;i<n-2;i++){
               r.push_back(a[i]);
            }
        
        return r;
    }
};
