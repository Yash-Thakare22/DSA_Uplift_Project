#include <iostream>
#include<algorithm>
using namespace std;


	int sum(int arr[], int n)
{
    int max_num = *max_element(arr, arr + n);
    if (max_num < 0) {
        return max_num;
    }
    int max_so_far = 0;
    int max_ending_here = 0;
    for (int i = 0; i < n; i++)
    {
        max_ending_here = max_ending_here + arr[i];
        max_ending_here = max(max_ending_here, 0);
        max_so_far = max(max_so_far, max_ending_here);
    }
 
    return max_so_far;
}
 
int main()
{  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++){
  cin>>a[i];}
    cout << sum(a, n);
	return 0;
}