'''Question 5

Given two strings, write program to check whether two given strings are anagram of each other or not
An anagram of a string is another string that contains the same characters, only the order of characters can be different

I/P:
str1="triangle" , str2="integral"
O/P:
Yes. Two strings are anagram of each other'''

#BRUTE FORCE
# time complexity is o(len(str)*len(str1)) ultimately is o(n^2)

str=input('Enter the string 1-:')
str1=input('Enter the string 2-:')
count=0
if(len(str)!=len(str1)):
    print('no')
else:
    for i in range(len(str)):
        for j in range(len(str1)):
            if(str[i]==str1[j]):
                count=count+1
                break
    print(count)        
    if(count==len(str)):
        print('yes')  
    else:
        print('no')     
'''
#differnt scenarios of the test cases


Enter the string 1-:triangle
Enter the string 2-:integral
8
yes
utkarsh@pop-os:~/Documents/string uplift$ /usr/bin/python3.9 "/home/utkarsh/Documents/string uplift/5.py"
Enter the string 1-:aloobaba
Enter the string 2-:babaaloo
8
yes
utkarsh@pop-os:~/Documents/string uplift$ /usr/bin/python3.9 "/home/utkarsh/Documents/string uplift/5.py"
Enter the string 1-:sfsfnfjnsfs
Enter the string 2-:sfnsjfnsnffsnfn
no
utkarsh@pop-os:~/Documents/string uplift$ /usr/bin/python3.9 "/home/utkarsh/Documents/string uplift/5.py"
Enter the string 1-:fugget
Enter the string 2-:fegget
5
no
utkarsh@pop-os:~/Documents/string uplift$ /usr/bin/python3.9 "/home/utkarsh/Documents/string uplift/5.py"
Enter the string 1-:0
Enter the string 2-:0
1
yes
'''            

#Reducing time complexity by hashing

str=input('Enter the string 1-:')
str1=input('Enter the string 2-:')
list=[0]*26
j=0
if(len(str)!=len(str1)):
    print('no')
else:
    for i in range(len(str)):
        list[ord(str[i])-97]=1
print(list) 
    for i in range(len(list)):
        
        if(str1[j]==1) 
          

