/*

Question 3

https://www.geeksforgeeks.org/recursive-bubble-sort/

*/



class Solution
{
    public:
    
    void bubbleSort(int arr[], int n)
    {
    if (n == 1)
        return;
    for (int i=0; i<n-1; i++)
        if (arr[i] > arr[i+1])
            swap(&arr[i], &arr[i+1]);
    bubbleSort(arr, n-1);
    }  

};
