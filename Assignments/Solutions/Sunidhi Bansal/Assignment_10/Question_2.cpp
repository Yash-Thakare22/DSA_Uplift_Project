#include <iostream>

using namespace std;

int max_element(int arr[],int size) {
    
    if (size == 1) {
       return arr[0]; 
    }
    
    return max(arr[size - 1],max_element(arr,size - 1));
}

int min_element(int arr[],int size) {
    
    if (size == 1) {
       return arr[0]; 
    }
    
    return min(arr[size - 1],min_element(arr,size - 1));
}

int main()
{
    int array[] = {1,5,7,8,2};
    cout<<min_element(array,5);
    cout<<max_element(array,5);
    return 0;
}

