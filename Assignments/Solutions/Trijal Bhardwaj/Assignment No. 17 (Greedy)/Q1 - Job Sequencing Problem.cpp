// Question Link: https://practice.geeksforgeeks.org/problems/job-sequencing-problem-1587115620/1

// { Driver Code Starts
// Program to find the maximum profit job sequence from a given array
// of jobs with deadlines and profits
#include<bits/stdc++.h>
using namespace std;

// A structure to represent a job
struct Job {
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

bool comp(Job a,Job b) {
    return a.profit>b.profit;
}

class Solution {
  public:
    //Function to find the maximum profit and the number of jobs done.
    vector<int> JobScheduling(Job arr[], int n) {
        // your code here
        sort(arr, arr+n, comp);

        int prof=0;
        int noOfjobs=0;
        bool check[n]= {0};

        for(int i=0; i<n; i++) {

            for(int j= min(n,arr[i].dead-1); j>=0; j--) {

                if(check[j]==0) {

                    noOfjobs++;
                    prof += arr[i].profit;
                    check[j]=1;

                    break;
                }
            }
        }
        return {noOfjobs, prof};
    }
};

// { Driver Code Starts.
// Driver program to test methods
int main() {
    int t;
    //testcases
    cin >> t;

    while(t--) {
        int n;

        //size of array
        cin >> n;
        Job arr[n];

        //adding id, deadline, profit
        for(int i = 0; i<n; i++) {
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
