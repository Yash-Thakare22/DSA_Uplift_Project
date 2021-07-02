Print 0 to N without loop

void counting(int n)
{
  if(n==0)
    return;
  
  n=n-1;
  counting(n);
  cout<<n<<endl;
}
int main()
{
  int n;
  cin>>n;
  counting(n);
  return 0;
}

_____________________________________________________________________________________________________________________________________________________________________________
  
 Print power of number

int power(int n,int pow)
{
  if(pow==0)
    return 1;
  
  retrun n*power(n,pow-1);
}

int main()
{
  int n,pow;
  cin>>n>>pow;
  cout<<power(n,pow);
  return 0;
}
________________________________________________________________________________________________________________________________________________________________

Count didgit in a number

int digit(int n)
{
  if(n==0)
    return 0;
  
  return 1+digit(n/10);
}
int main()
{
  int n;
  cin>>n;
  cout<<digit(n);
  return 0;
}
________________________________________________________________________________________________________________________________________________________________________
  
Sum of digits

int digit(int n)
{
  if(n==0)
    return 0;
  
  return n%10+digit(n/10);
}
int main()
{
  int n;
  cin>>n;
  cout<<digit(n);
  return 0;
}
___________________________________________________________________________________________________________________________________________________________________________

Fibonacci using recursion

int fibonacci(int n)
{
  if(n==0)
    'retrurn 0;
  else if(n==1)
    return 1;
  else
    return fibonacci(n-1)+fibonacci(n-2);
}
int main()
{
  int n;
  cin>>n;
  cout<<fibonacci(n);
  return 0;
}
