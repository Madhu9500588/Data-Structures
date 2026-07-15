#include<iostream>
using namespace std;


int gcd(int a, int b)
{
     if(a==0)
      return b;

    if(b==0)
    {
       return a;
    }

    else
    {
        return gcd(b, a%b);
    }
}
int main()
{
    int n1, n2;
    cout<<"Enter two numberrs to find their GCD:";
    cin>>n1>>n2;

   cout<<"GCD of"<<n1<<"and"<<n2<<"is"<<gcd(n1,n2);
    
}