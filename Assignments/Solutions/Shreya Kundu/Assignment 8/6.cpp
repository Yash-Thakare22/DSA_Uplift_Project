class Solution{   
public:
    string oddEven(int N){
        // code here
        
        if(N&(1<<0))
        return "odd";
        else
        return "even";
    }
};
