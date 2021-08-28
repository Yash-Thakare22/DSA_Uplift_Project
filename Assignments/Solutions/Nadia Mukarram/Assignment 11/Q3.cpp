class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        // Code here
       vector<int> r;
       r.push_back(a[n-1]);
       int max_right=a[n-1];
       for(int i=n-2;i>=0;i--){
           if(a[i]>=max_right){
               max_right=a[i];
               r.push_back(a[i]);
           }
           
       }
       reverse(r.begin(),r.end());
        return r;
        
    }
};
