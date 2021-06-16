
#include <iostream>
#include <string.h>
using namespace std;// Given a string arr consisting of lowercase english letters, arrange all its letters in lexicographical order using Counting Sort.

#define RANGE 300


void countSort(char arr[])
{

	char output[strlen(arr)];


	int count[RANGE + 1], i;
	memset(count, 0, sizeof(count));

	for (i = 0; arr[i]; ++i)
		++count[arr[i]];


	for (i = 1; i <= RANGE; ++i)
		count[i] += count[i - 1];


	for (i = 0; arr[i]; ++i) {
		output[count[arr[i]] - 1] = arr[i];
		--count[arr[i]];
	}

	for (i = 0; arr[i]; ++i)
		arr[i] = output[i];
}


int main()
{   int n;
   cin>>n;
	char S[n];
    for(int i=0;i<n;i++)
    {
        cin>>S[i];
    }
	countSort(S);

	cout << S;
	return 0;
}



