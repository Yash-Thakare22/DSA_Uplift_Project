#include<stdbool.h> 
#include<stdio.h> 
  
bool oppositeSigns(int x, int y) 
{ 
    return ((x ^ y) < 0); 
} 
  
int main() 
{ 
    int x = +100, y = -100; 
    if (oppositeSigns(x, y) == true) 
       printf ("Signs are opposite"); 
    else
      printf ("Signs are not opposite"); 
    return 0; 
} 