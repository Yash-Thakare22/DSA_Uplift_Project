// { Driver Code Starts
// Program to find the maximum profit job sequence from a given array 
// of jobs with deadlines and profits 
#include<bits/stdc++.h>
using namespace std; 

// A structure to represent a job 
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
}; 


 // } Driver Code Ends
/*
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
};
*/

class Solution 
{
    public:
    //Function to find the maximum profit and the number of jobs done.
    void place(int slot1[],int m,int dead,int profit){
        for(int i=dead-1;i>=0;i--){
            if(slot1[i]==0)
            {slot1[i]=profit;
                break;
            }
        }
    }
    static bool comp(Job a,Job b){
        return a.profit>b.profit;
    }
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        // your code here
        sort(arr,arr+n,comp);
        int m=arr[0].dead;
        for(int i=1;i<n;i++)
            m=max(m,arr[i].dead);
        int slot[m]={0};
        for(int i=0;i<n;i++)
        place(slot,m,arr[i].dead,arr[i].profit);
        int c=0,ans=0;
        for(int i=0;i<m;i++)
        {
            if(slot[i]!=0)
                c++;
                ans+=slot[i];
        }
        vector<int>v;
        v.push_back(c);
        v.push_back(ans);
        return v;
    } 
};

// { Driver Code Starts.
// Driver program to test methods 
int main() 
{ 
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        Job arr[n];
        
        //adding id, deadline, profit
        for(int i = 0;i<n;i++){
                int x, y, z;
                cin >> x >> y >> z;
                arr[i].id = x;
                arr[i].dead = y;
                arr[i].profit = z;
        }
        Solution ob;
        //function call
        vector<int> ans = ob.JobScheduling(arr, n);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
	return 0; 
}


  // } Driver Code Ends
