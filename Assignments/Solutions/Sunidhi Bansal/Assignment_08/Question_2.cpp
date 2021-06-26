//Searching : Count zeroes in searching matrix

class Solution{
public:
	int countZeros(vector<vector<int>>A)
	{
	    int N = A.size();
	    int y  = 0;
        int x = N - 1;
        int count = 0;
        while(y < N && x >= 0)
        {
            int t = A[y][x];
            if(t == 0) {
                y++;
                count += x + 1;
            } else {
                x--;
            }
        }
        return count;
	}
};