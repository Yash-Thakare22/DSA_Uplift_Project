int *sumTriangles(int n, int matrix[][n])
{
         int uppersum=0,lowersum=0;
         int *p=calloc(2,sizeof(int));
         for(int i=0;i<n;i++){
             for(int j=0;j<n;j++){
                 if(i<=j){
                     uppersum+=matrix[i][j];
                      
                 }
                 if(i>=j){
                     lowersum+=matrix[i][j];
                 }
                 
             }
         }
       p[0]=uppersum;
       p[1]=lowersum;
       return p;
}
