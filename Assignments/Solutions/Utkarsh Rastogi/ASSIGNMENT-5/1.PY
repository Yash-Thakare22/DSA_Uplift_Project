'''
Question 1:Given a binary array A[] of size N. The task is to arrange the array in increasing order.
Note: The binary array contains only 0  and 1.
Input: 
5
1 0 1 1 0
Output:
0 0 1 1 1
'''

n=int(input('Enter the number of elements -:'))
list=[]
for i in range(n):
    list.append(int(input(f'Enter the element {i} -:')))
print(list)    
count=0
#counting zeros
for i in range(len(list)):#o(n)
    if(list[i]==0):
        count=count+1
#print(count)      
#copying zeros straightaway in first places  
for i in range(count):#o(count of zeros)
    list[i]=0
#print(list)
#left places initialized to zero
while(count<len(list)):#o(len(list)-count)
    list[count]=1
    count=count+1
print(list)    

#time complexity is o(n+m+z)


'''
Enter the number of elements -:10
Enter the element 0 -:1
Enter the element 1 -:1
Enter the element 2 -:1
Enter the element 3 -:1
Enter the element 4 -:1
Enter the element 5 -:0
Enter the element 6 -:1
Enter the element 7 -:0
Enter the element 8 -:1
Enter the element 9 -:0
[1, 1, 1, 1, 1, 0, 1, 0, 1, 0]
[0, 0, 0, 1, 1, 1, 1, 1, 1, 1]
'''
