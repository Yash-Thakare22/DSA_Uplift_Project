'''Question 1

Given two strings str1 and str2, write program to swap two strings

I/P:
str1="C++" , str2="Java"
O/P:
str1="Java" , str2="C++"'''

str1='c++'
str2='java'
print(f'The original values are - str1={str1},str2={str2}')
temp=str1
str1=str2
str2=temp
print(f'After swapping the values are - str1={str1},str2={str2}')

#output
'''The original values are - str1=c++,str2=java
After swapping the values are - str1=java,str2=c++'''
