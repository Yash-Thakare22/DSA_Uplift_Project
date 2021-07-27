/*
There are two containers c1 and c2 given to us. Each container has several boxes. Each box is denoted by a symbol. Your task is to find if every box of container c2 occurs in container c1 and that too continously( one after another). If yes then return the index (1 based indexing) from where it starts in c1

Input1                             Output
C1: #fgsh%%7!                        3
C2: gsh%

Input2                             Output
C1: #fgsh%%7!                        -1  
C2: #gsh%
*/ 

#include <bits/stdc++.h>
using namespace std;
int container(string c1,string c2)
{
     int len1, len2, j;
    len1 = strlen(c1); 
    len2 = strlen(c2);
    
    if(len1<len2) 
    	return -1;
    	
    for(int i=0;i<len1;i++){
    
        if(c1[i] == c2[0]){
            for(j=0;j<len2;j++){
            
                if(c1[i+j] != c2[j]) 
                	break;
                	
            } if(j==len2) 
            	return i+1;
        }
    }
    return -1;
}


int main(){
    string c1,c2;
    cin>>c1>>c2;
    cout<<container(c1,c2);
    return 0;
}

//Time: O(N^2), Space: O(1)
