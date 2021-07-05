'''Question 4:Given a square matrix, rotate the matrix by 180 degree.
Input:
 
1   2   3   4
5   6   7   8
9   10  11  12
13  14  15  16
 
Output:
 
16  15  14  13
12  11  10  9
8   7   6   5
4   3   2   1'''

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

print('The rotated matrix is--:')

    #rotating matrix
for i in range(rows-1,-1,-1):
    for j in range(cols-1,-1,-1):
            print(f'|  {matrix[i][j]}  |', end='  ')  
    print('\n') 
