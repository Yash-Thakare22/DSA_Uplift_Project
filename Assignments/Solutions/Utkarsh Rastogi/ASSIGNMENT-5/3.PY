'''Question 3: The intersection of two arrays contains the elements common to both the arrays. The intersection should not count duplicate elements.
Given two sorted arrays arr1[] and arr2[] of sizes N and M respectively. Find their intersection

Input: 
N = 4, arr1[] = {1, 2, 3, 4}  
M = 5, arr2 [] = {2, 4, 6, 7, 8}
Output: 2 4

'''
list1=[]
list2=[]
list3=[]
N=int(input('Enter the elements- : '))
for i in range(N):
    list1.append(int(input(f'Enter the {i} element-: ')))
print('THE LIST 1 IS -:',list1)    

M=int(input('Enter the elements- : '))
for i in range(M):
    list2.append(int(input(f'Enter the {i} element-: ')))
print('THE LIST 2 IS -:',list2) 

for i in range(len(list1)):
    for j in range(len(list2)):
        if(list1[i]==list2[j]):
            list3.append(list1[i])
print('THE INTERSECTION OF THE LIST IS-:',list3)       

'''
Enter the elements- : 5
Enter the 0 element-: 2
Enter the 1 element-: 3
Enter the 2 element-: 4
Enter the 3 element-: 5
Enter the 4 element-: 6
THE LIST 1 IS -: [2, 3, 4, 5, 6]
Enter the elements- : 7
Enter the 0 element-: 98
Enter the 1 element-: 8
Enter the 2 element-: 5
Enter the 3 element-: 4
Enter the 4 element-: 3
Enter the 5 element-: 2
Enter the 6 element-: 1
THE LIST 2 IS -: [98, 8, 5, 4, 3, 2, 1]
THE INTERSECTION OF THE LIST IS-: [2, 3, 4, 5]
'''
