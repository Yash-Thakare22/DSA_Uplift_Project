int* shuffle(int* nums, int numsSize, int n, int* returnSize){
int *arr = malloc(sizeof(int)*2*n);
    for(int i=0;i<n;i++)
    {
        arr[2*i] = *(nums+i);
        arr[2*i+1]= *(nums+n+i);
}
    *returnSize=2*n;
    return arr;
}
