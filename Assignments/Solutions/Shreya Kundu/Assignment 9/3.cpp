class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        for(int i=0;i<indices.size()-1;i++){
            for(int j=0;j<indices.size()-1-i;j++){
                if(indices[j]>indices[j+1]){
                    swap(indices[j],indices[j+1]);
                    swap(s.at(j),s.at(j+1));
                }
            }
        }
        return s;
    }
};
