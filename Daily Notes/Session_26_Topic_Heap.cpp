A Heap is a special Tree-based data structure in which the tree is a complete binary tree. Generally, Heaps can be of two types:

Max-Heap: In a Max-Heap the key present at the root node must be greatest among the keys present at all of it’s children. 
The same property must be recursively true for all sub-trees in that Binary Tree.
Min-Heap: In a Min-Heap the key present at the root node must be minimum among the keys present at all of it’s children. 
The same property must be recursively true for all sub-trees in that Binary Tree.
  
Node is at i th position starting from index 0
Left child is 2*i+1
Right child is 2*i+2
index in the array.
  
  K Largest Elements in an array
  
  //Using Min Heap - K largest Elements

#include<iostream>
using namespace std;

class MinHeap {
    int size;
    int* arr;
    public:
        MinHeap(int size, int input[]);
        void heapify(int i);
        void buildHeap();
};

MinHeap::MinHeap(int size, int input[])
{
    this->size = size;
    this->arr = input;
    buildHeap();
}

void MinHeap::buildHeap()
{
    for(int i=size/2-1;i>0;i--)
    {
        heapify(i);
    }
}

int swap(int& x, int& y)
{
    int temp = x;
    x=y;
    y=temp;
}

void MinHeap::heapify(int i)
{
    if(i>=size/2)
    {
        return;
    }
    int smallest;
    int left = 2 * i + 1;
    int right = 2 *i + 2;
    
    smallest = arr[left]<arr[i]?left:i;
    
    if(right < size)
    {
        smallest = arr[right] < arr[smallest] ? right: smallest;
        
    }
    
    if(smallest != i)
    {
        swap(arr[i],arr[smallest]);
        heapify(smallest);
        
    }
}



void firstKElements(int arr[], int size, int k)
{
    MinHeap* mh = new MinHeap(k,arr);
    for(int i=k;i<size;i++)
    {
        if(arr[0] > arr[i])
        {
            continue;
            
        }
        else
        {
            arr[0] = arr[i];
            mh->heapify(0);
        }
    }
    for(int i=0;i<k;i++)
    {
        cout<<arr[i]<<" ";
    }
}



int main()
{
    int arr[] = { 11, 3 ,4 , 22 , 30 , 78, 89, 55, 44, 26,21, 67};
    int size = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    firstKElements(arr, size, k);
    return 0;
}
  
  
  
