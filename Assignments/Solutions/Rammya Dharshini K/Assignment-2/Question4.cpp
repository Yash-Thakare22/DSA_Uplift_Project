/* Given an array arr[] of N integers. Find the contiguous sub-array with maximum sum
Hint: Kadane’s Algorithm

I/P:
8
-2 -3 4 -1 -2 1 5 -3

O/P:
7           */

#include<iostream>

using namespace std;

int main(){
    int max=0,sum;
    int i,j,n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++) 
		cin >> a[i];
		
    for(i=0;i<n;i++){
    	sum = 0;
        for(j=i;j<n;j++){
            sum += a[j];
            if(sum > max)
              max = sum;
        }
	}
	cout << max;
    return 0;
}
