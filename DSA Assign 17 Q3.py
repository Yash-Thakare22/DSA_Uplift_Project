int Solution::bulbs(vector&lt;int&gt; &amp;A) {
int k=0,ans=0;
for(int i=0;i&lt;A.size();i++){
if(k==A[i]){
if(k==0) k=1;
else k=0;
ans++;
}
}
return ans;
}