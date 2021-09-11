/*
Given a M*N matrix, print the matrix in spiral order
Input:
 
[  1   2   3   4  5 ] 
[ 16  17  18  19  6 ]
[ 15  24  25  20  7 ]
[ 14  23  22  21  8 ]
[ 13  12  11  10  9 ]
 
Output:
 
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25
*/



#include <bits/stdc++.h>
using namespace std;

void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
int main()
{
	int arr[100][100],M,N,i,j;
	cin>>M>>N;
	for(i=0;i<N;i++)
    {
        for(j=0;j<M;j++)
        {
            cin>>arr[i][j];
        }
    }
     
    int top=0,down=M-1,left=0,right=N-1,dir=0;
   
    cout<<"Matrix in sprial order"<<endl;
	
	while(top<=down&&left<=right) 
	{
	      if(dir==0)
		 {
		     for (int j = left; j<=right ; j++) 
		     {
			   cout<<arr[top][j]<<" ";
		     }
		     top++;
		 }
		 else if(dir==1)
		 {
		     for (int j = top; j<=down ; j++) 
		     {
			   cout<<arr[j][right]<<" ";
		     }
		     right--;
		 }
		 else if(dir==2)
		 {
		     for (int j = right; j>=left ; j--) 
		     {
			   cout<<arr[down][j]<<" ";
		     }
		     down--;
		 }
		 else if(dir==3)
		 {
		     for (int j = down; j>=top ; j--) 
		     {
			   cout<<arr[j][left]<<" ";
		     }
		     left++;
		 }
		 
		 dir = (dir+1)%4;
	
	}
	return 0;
}

