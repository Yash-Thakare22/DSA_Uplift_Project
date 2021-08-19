GCD and LCM

#include <iostream>
using namespace std;

//Euclidean Algorithm
int gcd(int a,int b)
{
    if(b==0)
        return a;
    return gcd(b,a%b);
}
int lcm(int a,int b)
{
    return a/gcd(a,b)*b;
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<gcd(a,b)<<endl;
    cout<<lcm(a,b);
    return 0;
}


Check whether given number is prime or not

#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    if(n<=1)
        return false;  
    for(int i=2;i<=sqrt(n);i++)
        if(n%i==0)
            return false;
    
    return true;
}

int main()
{
    int a;
    cin>>a;
    if(isPrime(a))
        cout<<"Prime no";
    else
        cout<<"Not a Prime no";
    return 0;
}

Given a number n, print all primes smaller than or equal to n

#include <bits/stdc++.h>
using namespace std;

//Sieve of Eratosthenes
void seive(int n)
{
    bool prime[n+1];
    memset(prime,true, sizeof(prime));
    
    for(int i=2;i<=sqrt(n);i++)  
    {
        if(prime[i]==true)
        {
            for(int k=i*i;k<=n;k+=i)
                {
                    prime[k]=false;
                }
        }
    }
    
    for(int p=2; p<=n;p++)
        if(prime[p])
            cout<<p<<" ";
}
 
int main()
{
    int n;
    cin>>n;
    
    seive(n);  
    
    return 0;
}

Time complexity - O(n*sqrt(n))


Check if a large number is divisible by 3 or not 

#include <bits/stdc++.h>
using namespace std;
 
int check(string str)
{
    int n=str.length();
    int digit=0;
    for(int i=0;i<n;i++)
        digit+=(str[i]-'0'); 
    
    return (digit %3 == 0);
}

int main()
{
    string s;  
    getline(cin,s);
    
    if(check(s))
        cout<<"Divisible";
    else
        cout<<"Not divisible";
    
    return 0;
}


Euler's totient function

ALgorithm-
gcd function 

1.count=1
2.iterate for i from 2 to n-1 
3.    if gcd(i,n)==1
4.        count++
5.return count
