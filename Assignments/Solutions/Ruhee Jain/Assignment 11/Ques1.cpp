/*

Ques1

https://practice.geeksforgeeks.org/problems/number-is-sparse-or-not-1587115620/1/?track=DSASP-BitMagic&batchId=154

*/



#include<iostream>
using namespace std;

class Solution
{
    public:
   
    bool isSparse(int n)
    {
         if (n & (n>>1))
        return false;
 
    return true;
    }
 
    
};

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        Solution ob;
        if(ob.isSparse(n)){
            cout << "1" << endl;
        }
        else cout << "0" << endl;
        
    }
    return 0;
}


