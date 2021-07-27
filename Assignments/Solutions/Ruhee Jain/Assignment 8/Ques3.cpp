/*

Ques3

SORTING: https://practice.geeksforgeeks.org/problems/at-least-two-greater-elements4625/1

*/

class solution{

public:
  vector<int> findElements(int arr[], int n)
    {
    vector<int> res;
     sort(arr, arr + n);
 
    for (int i = 0; i < n - 2; i++){
        res.push_back(arr[i]);
    }
    return res;
    }
};
