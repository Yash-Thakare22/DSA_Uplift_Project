'''Question 2: Given an array arr[] of N positive integers and a number K. The task is to find the kth smallest element in the array.
Input: 
N = 5, K = 3
arr[] = {3,5,4,2,9}
Output: 
4

'''
#key_points  sort() changes the list directly and return value None
#  sorted() takes the parameters and does not change the original list
N=int(input('Enter the elements you want in list -:'))
K=int(input('Enter the kth smallest element you want in list '))
list=[]
for i in range(N):
    list.append(int(input(f'Enter the {i} element -:')))
print('The original list is -',list)    
list.sort()# time complexity= o(nlogn)
print('The sorted list is -',list)
print(f'The {K}th smallest element is -: ',list[K])#o(1)

'''output

Enter the elements you want in list -:5
Enter the kth smallest element you want in list 3
Enter the 0 element -:34
Enter the 1 element -:54
Enter the 2 element -:43
Enter the 3 element -:54
Enter the 4 element -:65
The original list is - [34, 54, 43, 54, 65]
The sorted list is - [34, 43, 54, 54, 65]
The 3th smallest element is -:  54
'''
