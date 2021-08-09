class Solution{
public:	
	// swap k'th element from beginning and end
	void swapKth(int *arr, int n, int k) {
	    int t=arr[k-1];
	    arr[k-1]=arr[(n-1)-(k-1)];
	    arr[(n-1)-(k-1)]=t;
      }
};
