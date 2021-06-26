#include <math.h>
#include <stdio.h>
unsigned int getFirstSetBitPos(int n)
{
    return log2(n & -n) + 1;
}
int main()
{
    int n ;
    scanf("%d",&n);
    printf("%u", getFirstSetBitPos(n));
    getchar();
    return 0;
}
