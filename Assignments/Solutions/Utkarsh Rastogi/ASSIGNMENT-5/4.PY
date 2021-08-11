'''Question 4: Given a string arr consisting of lowercase english letters, arrange all its letters in lexicographical order using Counting Sort.

Input:
N = 5
S = "edsab"
Output:
abdes'''

N=int(input('Enter the length of the string--:'))
S=input('Enter the string--:')
count_list=[0]*26
count=1
str=''
for i in range(len(S)): #o(N)
    if(count_list[ord(S[i])-97]>=1):
       count_list[ord(S[i])-97]=count_list[ord(S[i])-97]+1
    else:
           count_list[ord(S[i])-97]=count
print(count_list)    
for i in range(len(count_list)):#O(26)
    if(count_list[i]!=0):
        str=str+(chr(i+97)*count_list[i])
print(str)        #TIMECOMPLEXITY IS O(N+26)

'''
Enter the length of the string--:6
Enter the string--:babooo
[1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0]
abbooo

Enter the length of the string--:5
Enter the string--:edsab
[1, 1, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0]
abdes
'''
