class Solution{
public:
        vector<int> findElements(int a[], int n)
    {
        // Your code goes here 
        vector<int>r;
        sort(a,a+n);
        for(int i=0;i<n-2;i++)
        {
         r.push_back(a[i]);   
        }
        return r;
    }
};
