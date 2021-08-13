class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        // Code here
        vector<int>ans;
        int max=n-1;
        for(int i=n-1;i>=0;i--){
            if(a[max]<=a[i]){
            max=i;
            ans.push_back(a[max]);
            }
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
