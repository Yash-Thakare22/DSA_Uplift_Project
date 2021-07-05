'''Question2:
Given a 2D array arr[][] of size M x N integers where M is the number of rows and N is the number of columns. The task is to reverse every row of the given 2D array.
Example: 
 

Input: arr[][] = 
{ {1, 2, 3},
  {4, 5, 6},
  {7, 8, 9} }
Output:
3 2 1
6 5 4
9 8 7'''

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

print('The reverse row matrix is-:')

#reversing rows
    
for i in range(rows):
    
    for j in range(cols-1,-1,-1):
        print(f'|  {matrix[i][j]}  |', end='  ')  
    print('\n')  
