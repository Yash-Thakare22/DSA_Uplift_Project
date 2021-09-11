
int equilibriumPoint(long long a[], int n) {
        if(n==1)
          return 1;
        int s1=a[0],s=0;

        for(int i=0;i<n;i++)
           s+=a[i];
        for(int i=1;i<n-1;i++){
            if(s1==(s-s1-a[i]))
               return i+1;
             s1+=a[i];
        }
        return -1;
    }
            
            
