'''Question 2

Given a string str, the task is to remove all the duplicates in the given string

I/P:
aababcdd
O/P:
abcd'''

list=[0]*26
str='heeeelomrrrhowareyouuuuuu'
str1=''
for i in range(len(str)):  #len()takes o(1) time complexity
    
    if(list[ord(str[i])-97]!=1):
        str1=str1+str[i]
    list[ord(str[i])-97]=1    
print(str1)
print(list)    

#output
#helomrwayu
#[1, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 1, 1, 0, 1, 0, 0, 1, 0, 0, 1, 0, 1, 0, 1, 0]

'''algorithm
for finding dupllicates in a word has having several methods
1. brute force takes o(n^2)
2. hashing methods which i used here takes o(n) time complexity

AS WE KNOW a =97 in ascii and z=122
so  to create a list we subtracted by 97 like a=97-97=0
b=98-97=1
and create a list initialized to 0
and mark the corresponding ascii values to indexes
and mark those places by 1
if we any place is 0 we create a string otherwise not
'''
