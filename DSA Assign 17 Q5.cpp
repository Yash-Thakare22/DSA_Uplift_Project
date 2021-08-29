int Solution::solve(vector<vector > &A) {

if(A.size()==0)

return 0;

if(A.size()==1)

return 1;

map<int,int> meet;

for(int i=0;i<A.size();i++)

meet.insert(make_pair(A[i][1], A[i][0]));

int count=1;

auto it=meet.begin();

int lastTime=it->first;

it++;

for(;it!=meet.end();it++)

{

if(lastTime<=it->second)

lastTime=it->first;

else

count++;

}

return count;
}
