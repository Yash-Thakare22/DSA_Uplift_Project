#include <iostream>
#include <string>
#include <vector>

using namespace std;

int is_C2_present(string C1, string C2) {
    int i = 0;
    vector<int> indices;
    while(i < C2.length()) {
        for(int j = 0; j < C1.length(); j++) {
            if (C2[i] == C1[j]) {
                i++;
                indices.push_back(j);
            }
        }
    }
    
    for(int k = 1; k < indices.size(); k++) {
        int diff = indices[k] - indices[k - 1];
        if (diff != 1) {
            return -1;
        }
    }
    
    return (indices[0] + 1);
}

int main()
{
    string C1,C2;
    getline(cin,C1);
    getline(cin,C2);
    cout<<is_C2_present(C1,C2);
    
    return 0;
}

// every  box of container c2 occurs in container 1 and that too continuously.
