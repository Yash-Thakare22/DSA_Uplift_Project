/*Question 1. Rhombus pattern
             *  *  *  *  *
          *  *  *  *  *
       *  *  *  *  *
    *  *  *  *  *
 *  *  *  *  *            */
 //CODE:
 #include<iostream>
 using namespace std;
 int main()
 {
     int i,j,k;
     for(i=1;i<=5;i++)
     {
         for(j=i;j<5;j++)
         {
             cout<<" ";
         }
         for(k=1;k<=5;k++)
         {
             printf("*");
         }
         printf("\n");
     }
 }
