class Solution {
public:
    int romanToInt(string s) {
      map<char,int>m;
        m.insert({'I',1});
        m.insert({'V',5});
        m.insert({'X',10});
        m.insert({'L',50});
        m.insert({'C',100});
        m.insert({'D',500});
        m.insert({'M',1000});
     int a=0;   
     for(int i=0;i<s.size();i++)
     {
         if(m[s[i]]<m[s[i+1]]){
          a+=m[s[i+1]]-m[s[i]];
             i++;
             continue;
         }
          else 
              a+=m[s[i]];
     }
       return a; 
    }
};
