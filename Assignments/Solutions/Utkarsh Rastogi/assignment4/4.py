'''Question 4

Given a string str, write program reverse words in a given string

I/P:
Do problem solving
O/P:
solving problem Do'''

str='puntak'

  

print(str[-1:-7:-1])

#another method
str=input('Enter the input string-:')
for i in range(len(str)-1,-1,-1):
    print(str[i],end='')  #o(n)
print('\n')    

'''output
katnup
Enter the input string-:hamburger
regrubmah


'''
