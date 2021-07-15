What is Hashing ?
Hashing is the process of mapping large amount of data item to smaller table with the help of hashing function.
Hashing is also known as Hashing Algorithm or Message Digest Function.
Hashing allows to update and retrieve any data entry in a constant time O(1).
Constant time O(1) means the operation does not depend on the size of the data.
A fixed process converts a key to a hash key is known as a Hash Function.

What is Hash Value ?
This function takes a key and maps it to a value of a certain length which is called a Hash value or Hash.
 
Hash Functions
A hash function may map different  keys to the same slot. This is called a “collision”, when  two keys have the same hash value
Good Hash Functions
Fast to compute, O(1)
Scatter keys evenly throughout the hash table
Less collisions
Need less slots (space)

Hash Table
A hash table (or hash map) is a data structure  that uses a hash function to efficiently map keys  to values, for efficient search and retrieval

Hash Maps / Unordered Maps
Unordered maps are associative containers that store elements formed by the combination of a key value and a mapped value, and which allows for fast retrieval of individual elements based on their keys.
In an unordered_map, the key value is generally used to uniquely identify the element, while the mapped value is an object with the content associated to this key. Types of key and mapped value may differ.
 
Hashing of Strings: Example
hash1("Tan Ah Teck")
= ('T' + 'a' + 'n' + ' ' +  'A' + 'h' + ' ' +
'T' + 'e' + 'c' + 'k') % 11
// hash table size is 11
= (84 + 97 + 110 + 32 + 65 + 102 + 32 + 84 + 101 + 99 + 107)%11
= 825%11
= 0

Most Frequent Element Program

#include <bits/stdc++.h>
using namespace std;
 
int mostFrequent(int arr[], int n)
{
    // Insert all elements in hash.
    unordered_map<int, int> hash;
    for (int i = 0; i < n; i++)
        hash[arr[i]]++;
 
    // find the max frequency
    int max_count = 0, res = -1;
    for (auto i : hash) {
        if (max_count < i.second) {
            res = i.first;
            max_count = i.second;
        }
    }
 
    return res;
}
 

int main()
{
    int arr[] = { 1, 5, 2, 1, 3, 2, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << mostFrequent(arr, n);
    return 0;
}
