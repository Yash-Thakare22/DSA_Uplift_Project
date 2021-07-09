class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        vector<int>res;
         res.push_back(a[n-1]);
         int flag=a[n-1];
        for(int i=n-2;i>=0;i--)
        {
            if(a[i]>=flag){
            res.push_back(a[i]);
            flag=a[i];
            }
        }
       reverse(res.begin(),res.end());
        return res;
    }
};
