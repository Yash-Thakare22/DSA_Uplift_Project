unordered_map<int,int> OM;
for(int i=0;i<A.size();i++)
{
    OM[A[i]] = i;
}
int i=0;
int N = A.size();
while(i<B)
{
    if(N==1)
        return A;
    else if(A[i]==N)
    {
        i++;
        B++;
        N--;
    }
    else
    {
        int ind = OM[N];
        int temp = A[i];
        A[i] = N;
        A[OM[N]] = temp;

        OM[N] = i;
        OM[temp] = ind;
        N--;
        i++;
    }
}
return A;

}