// Question 2: Given an array arr[] of N positive integers and a number K. The task is to find the kth smallest element in the array.
// Input: 
// N = 5, K = 3
// arr[] = {3,5,4,2,9}
// Output: 
// 4
// #include <iostream>
// using namespace std;
// int main(){
//     int n,k;
//     cin>>n>>k;
//     int a[n];
//     for(int i=0;i<n;i++) cin>>a[i];
//     for(int i=0;i<n;i++){
//         int x = a[i];
//         for(int j=i+1;j<n;j++){
//             if(a[j]<x){
//                 int t= a[j];
//                 a[j] = x;
//                 x = t;
                
//                 }
//         }        
//     }
//     for(int i=0;i<n;i++) cout<<a[i]<<" ";

//     return 0;
// }
