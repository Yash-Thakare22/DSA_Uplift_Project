int rc(char a){
    switch(a){
        case 'X':
            return 10;
        case 'I':
            return 1;
        case 'V':
            return 5;
        case 'L':
            return 50;
        case 'M':
            return 1000;
        case 'C':
            return 100;
        case 'D':
            return 500;
        default:
            return 0;

    }
}

int Solution::romanToInt(string A) {
    int x=0;
    for(int i=0;i<A.size();i++){
        int j=A[i],k=0;
        if(i<A.size()-1) k=A[i+1];
        if(rc(A[i+1])>rc(A[i]) && i<A.size()-1){
            x+=rc(A[i+1]);
            x-=rc(A[i]);
            i++;
        }else{
            x+=rc(A[i]);
        }
        
    }return x;


}
