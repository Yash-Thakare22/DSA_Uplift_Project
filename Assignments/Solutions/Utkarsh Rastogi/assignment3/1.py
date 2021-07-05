'''Question 1: 
Given a 2D square matrix, print the Principal and Secondary diagonals. 

Examples : 

Input: 
4
1 2 3 4
4 3 2 1
7 8 9 6
6 5 4 3
Output:
Principal Diagonal: 1, 3, 9, 3
Secondary Diagonal: 4, 2, 8, 6'''

# creating matrix
matrix=[]
rows=int(input('enter the number of rows-:'))
cols=int(input('enter the number of columns-:'))

for i in range(rows):
    a=[]
    for j in range(cols):
        a.append(int(input(f'Enter the element {i}{j}-:')))
    matrix.append(a) 
print(matrix)

for i in range(rows):
    
    for j in range(cols):
        print(f'|  {matrix[i][j]}  |', end='  ')  
    print('\n')  

# matrix created
    # finding primary diagonal 
print('The primary diagonal is-:')    
for i in range(rows):
    for j in range(cols):
        if(i==j):# for  primary diagonal i is equal to j
            print(matrix[i][j],end=' ')
print('\n')


    # finding secondary diagonal  
print('The secondary diagonal is-:')     
for i in range(rows):
    for j in range(cols):
        if(i+j==rows-1):# if rows are 4 then addition is 3for all
            print(matrix[i][j],end=' ')

print('\n')




#output
'''
enter the number of rows-:4
enter the number of columns-:4
Enter the element 00-:56
Enter the element 01-:67
Enter the element 02-:87
Enter the element 03-:90
Enter the element 10-:87
Enter the element 11-:65
Enter the element 12-:45
Enter the element 13-:76
Enter the element 20-:54
Enter the element 21-:34
Enter the element 22-:65
Enter the element 23-:67
Enter the element 30-:56
Enter the element 31-:43
Enter the element 32-:65
Enter the element 33-:76
[[56, 67, 87, 90], [87, 65, 45, 76], [54, 34, 65, 67], [56, 43, 65, 76]]
|  56  |  |  67  |  |  87  |  |  90  |  

|  87  |  |  65  |  |  45  |  |  76  |  

|  54  |  |  34  |  |  65  |  |  67  |  

|  56  |  |  43  |  |  65  |  |  76  |  

The primary diagonal is-:
56 65 65 76 

The secondary diagonal is-:
90 45 34 56 '''
