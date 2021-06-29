string restoreString(string s, vector<int>& indices) {
        string new_string;
        for(int i=0;i<s.size();i++){
            for(int j=0;j<s.size();j++){
                if(indices[j]==i)
                    new_string+=s[j];
            }
        }return new_string;
    }