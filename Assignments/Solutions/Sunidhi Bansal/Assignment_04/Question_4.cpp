
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    string str;
    getline(cin,str);
    string temp="";
    vector <string> words;
    int i = 0;
    
    for(int i=0;i<str.length();i++)             //dividing the sentence to words
    {
        if(str[i] == ' ')
        {
            words.push_back(temp);
            temp = "";
        }
        else
        {
            temp += str[i];
        }
    }
    words.push_back(temp);
    
    int start = 0;
    int end = words.size()-1;
    
    for(int i = 0; i < words.size()/2; i++)               //reversing the vector containing words
    {
        string temp = words[start];
        words[start] = words[end];
        words[end] = temp;
        start++;
        end--;
    }
    
    str="";
    
    for(int i = 0;i<words.size();i++)                     // concatinating words to form sentence
    {
        str += words[i] + " ";
    }
    
   cout<<str<<endl;

    
    return 0;
}

