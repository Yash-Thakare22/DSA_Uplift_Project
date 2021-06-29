#include<stdio.h>
int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        int key = arr[i];
        int j=0;
        for(j=i-1;j>=0 && key < arr[j];j--)
        {
            arr[j+1] = arr[j];
        }
        arr[j+1] = key;
    }
    printf("%d ",arr[k-1]);
}
