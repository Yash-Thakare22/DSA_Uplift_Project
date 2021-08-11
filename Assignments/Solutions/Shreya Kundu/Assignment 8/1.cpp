class Solution{
public:	
	// swap k'th element from beginning and end
	void swapKth(int *arr, int n, int k) {
	    // code here
	    int t=arr[k-1];
	    arr[k-1]=arr[n-k];
	    arr[n-k]=t;
	    
	}
};
