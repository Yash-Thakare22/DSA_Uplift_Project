// Pattern : Triangle shrinking downwards

string triDownwards(string S) {
        int len = S.length();
        string h="";
        for(int  i = 0; i < len; i++)
        {
            for(int j = 0; j < len; j++)
            {
                h += S[j];
            }
            S[i]='.';
        }
        return h;
    }
