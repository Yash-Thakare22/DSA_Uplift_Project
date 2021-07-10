class Solution
{
    public:
int equilibriumPoint(long long a[], int n) {
  
        long long p[n],s[n];p[0]=0;s[n-1]=0;
        
        for(int i=1;i<n;i++)
        {
            p[i]=p[i-1]+a[i-1];
            s[n-i-1]=a[n-i]+s[n-i];
        }
        
        for(int i=0;i<n;i++)
        {
            if(p[i]==s[i])
            return i+1;
        }
        return -1;
    }
    
};
