    #include <bits/stdc++.h>

    using namespace std;

    int anagram(string str1,string str2)

    {

        int i, flag = 0,  x[26] = {0}, y[26] = {0};

        for(i = 0; str1[i] != '\0'; i++)

            x[str1[i] - 'a']++;

        for(i = 0; str2[i] != '\0'; i++)

            y[str2[i] - 'a']++;

        for (i = 0; i < 26; i++)

        {

            if (x[i] != y[i])

                flag = 1; 

        }

        if (flag == 1)

            cout << "Entered strings are not anagrams.";

        else

            cout << "Entered strings are anagrams.";

    }

     

    int main ()

    {

          string str1, str2;
          int flag;

          cout << "Enter string 1 : ";
          getline(cin,str1);
          cout << "Enter string 2 : ";
          getline(cin,str2);

          anagram(str1, str2);

        return 0;

    }
