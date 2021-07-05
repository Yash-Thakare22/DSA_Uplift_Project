'''Question 3

Given two strings, removes the characters from the first string which are present in the second string

I/P:
str1="leetcode" , str2="let"
O/P:
cod'''

list=[0]*26
str1='leetcode'
str2='let'
str=''

for i in range(len(str2)):
    list[ord(str2[i])-97]=1
print(list)    
j=0
label:
for i in range(len(list)):
    print(i)
    
    if((ord(str1[5])-97)==i and list[i]!=1):
        print(list[i])
        str=str+str1[5]  
        j=j+1
        goto label;  

print(str)        
