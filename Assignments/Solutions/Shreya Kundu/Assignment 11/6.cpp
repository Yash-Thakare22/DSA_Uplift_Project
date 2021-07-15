         int a[2]={0};
//Function to return sum of upper and lower triangles of a matrix.
int* sumTriangles(int n, int matrix[][n])
{

         
         for(int i=0;i<n;i++){
             for(int j=i;j<n;j++){
                 a[0]+=matrix[i][j];
             }
         }
         for(int i=0;i<n;i++){
             for(int j=0;j<=i;j++){
                 a[1]+=matrix[i][j];
             }
         }
         
         return a;
         
}
