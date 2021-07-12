/*

Question 1
Given an i/p array where every element occurs three times, except one element which occurs only once . Find that element

I/P:
4 3 5 5 4 4 5

O/P:
3

*/

#include <iostream>
using namespace std;
#define INT_SIZE 32
 
int getSingle(int arr[], int n)
{
  
    int result = 0;
 
    int x, sum;
 
    for (int i = 0; i < INT_SIZE; i++) {
 
        sum = 0;
        x = (1 << i);
        cout<<x<<endl;
        for (int j = 0; j < n; j++) {
            if (arr[j] & x)
                sum++;
        }
 
        if ((sum % 3) != 0)
            result |= x;
    }
 
    return result;
}
 
int main()
{
   int n;
   cin>>n;
   int a[n];
   for(int i=0; i<n; i++){
       cin>>a[i];
   }
    cout << "The element with single occurrence is " << getSingle(a, n);
    return 0;
}
 
