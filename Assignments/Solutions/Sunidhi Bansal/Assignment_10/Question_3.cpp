#include <iostream>

using namespace std;

int max_element(int arr[],int size) {
    
    if (size == 1) {
       return arr[0]; 
    }
    
    return max(arr[size - 1],max_element(arr,size - 1));
}

int max_element_index(int arr[],int n) {
    int max = 0;
    for (int i = 0;i < n; i++)
    {
        if(arr[max] < arr[i]) {
            max = i;
        }
    }
    return max;
}

void sort (int arr[], int size) {

    int position = max_element_index(arr,size);    //swapping
    int temp = arr[size - 1];
    arr[size - 1] = max_element(arr,size);
    arr[position] = temp;
    
    if (size == 1) {
        return;
    }
    sort(arr,size - 1);
}

int main()
{
    int n = 7;
    int array[] = {64, 34, 25, 12, 22, 11, 90};
    sort(array,n);
    for(int i = 0; i < n; i++) {
        cout<<array[i]<<" ";
    }
    return 0;
}

