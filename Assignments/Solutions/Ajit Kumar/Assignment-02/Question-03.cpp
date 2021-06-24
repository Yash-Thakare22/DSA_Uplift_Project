/*
Question 3

Given an array, cyclically rotate the array clockwise by one

I/P:
1 2 3 4 5

O/P:
5 1 2 3 4

*/

#include <iostream>
using namespace std;

int main(){

    int rot=1;

    int arr[5]={1,2,3,4,5};

    int temp=arr[0];

    for(int i=0; i<5; i++)
    {
        arr[i]=arr[i+1];
                    
    }
    arr[4]=temp;

    //display the array
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }

}