

int countNegatives(int** grid, int gridSize, int* gridColSize){

    int negative=0;
    int t1 = gridSize,t2= *gridColSize;
    for(int i=0;i<t1;i++)
    {
        if(grid[i][0]<0)
        {            
            negative = negative + t2*(t1-i);
            //printf("%d ",negative);
            return negative;
        }
        
        for(int j=0;j<t2;j++)
        {
            if(grid[i][j]<0)
            {//printf("%d %d",i, grid[i][0]);
                negative = negative + (t2-j)*(t1-i) ;
                //printf("%d ",negative);
                t2 = j;
            }
        }
    }
    return negative;
}
