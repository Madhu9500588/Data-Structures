#include<iostream>
using namespace std;

int main()
{
    int num, originalnum, rev=0, remainder;

    cout<<"Enter the number to check the Palindrome:";
    cin>>num;

    originalnum=num;
    
    while(num!=0){
    remainder=num%10;
    rev = rev*10 + remainder;
    num = num/10;
    }

    cout<<"Original number:"<<originalnum<<endl;
    cout<<"Reverse:"<<rev<<endl;

    if(originalnum == rev)
    {
        cout<<"Palindrome:";
    }

    else{
        cout<<"Not a Palindrome";
    }
}