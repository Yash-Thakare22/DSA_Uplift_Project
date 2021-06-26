/*

Question 5

Given an array arr[] of integers, find the first repeating element in it. We need to find the element that occurs more than once and whose index of first occurrence is smallest

I/P:
5 10 40 4 6 5 10

O/P:
5 (5 is the first element that repeats)


*/

#include <iostream>
using namespace std;

int main ()
{
    int arr[5]={1,2,3,2,5};

    //select an element 
    for (int i=0; i<5; i++){

        //transverse and check for repeated element
        for(int j=i+1; j<5; j++){

            //if the element if found 
            if(arr[i]==arr[j]){
                cout<<arr[i];           //print
                break;
            }
        }
        cout<<endl;
    }
}