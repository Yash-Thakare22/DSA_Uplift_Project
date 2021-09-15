#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<vector<int>> res;
    bool ispossible(int i,int c,vector<vector<int>>&b,int n) {
        for(int k=0; k<c; k++) {
            if(b[i][k]==1)
                return false;
        }
        for(int k=i,j=c; k>=0&&j>=0; k--,j--) {
            if(b[k][j]==1)
                return false;
        }
        for(int k=i,j=c; k<n&&j>=0; k++,j--) {
            if(b[k][j]==1)
                return false;
        }
        return true;
    }
    void help(vector<vector<int>>& board,int c,int n,vector<int> v) {
        if(c==n) {
            res.push_back(v);
            v.clear();
            return ;
        }
        for(int i=0; i<n; i++) {
            if(ispossible(i,c,board,n)) {
                board[i][c]=1;
                v.push_back(i+1);
                help(board,c+1,n,v);
                board[i][c]=0;
                v.pop_back();
            }
        }
    }
    vector<vector<int>> nQueen(int n) {
        vector<vector<int>> board;
        vector<int> v(n,0);
        for(int i=0; i<n; i++) {
            board.push_back(v);
        }
        v.clear();
        help(board,0,n,v);
        return res;
    }
};

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;

        Solution ob;
        vector<vector<int>> ans = ob.nQueen(n);
        if(ans.size() == 0)
            cout<<-1<<"\n";
        else {
            for(int i = 0; i < ans.size(); i++) {
                cout<<"[";
                for(int u: ans[i])
                    cout<<u<<" ";
                cout<<"] ";
            }
            cout<<endl;
        }
    }
    return 0;
} 
