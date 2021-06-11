/*Question 2

An array contains both positive and negative numbers in random order. Rearrange the array elements so that all negative numbers appear before all positive numbers
Note: Order of elements is not important here

I/P:
-2  -3 7 9 -4 2 5

O/P:
-2 -3 –4 7 9 2 5
*/

#include<iostream>
using namespace std;

int main(){
//input:
int arr[]={-2,-3,7,9,-4,2,5};
int n=sizeof(arr)/sizeof(arr[0]);

//calculation:
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(arr[j]<0){
            int tmp=arr[i];
            arr[i]=arr[j];
            arr[j]=tmp;
        }
    }
}
//output:
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
return 0;
}
