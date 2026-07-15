#include<iostream>
#include<string>
using namespace std;

int main()
{
  string str;
  cout<<"Enter a String:";
  cin>>str;  

 
  int start =0;
  int end= str.length() -1;
   bool isPalindrome=true;


  while(start<end)
  {
    if (str[start] != str[end])
    {
      isPalindrome=false;
       break;
    }
    start++;
    end--;
}
  if(isPalindrome)
  {
    cout<<"The String is Palindrome:";
  }
  else
  {
    cout<<"The String is not a Palindrome:";
  }

  return 0;

}