#include<iostream>
using namespace std;
int main()
{
    string s;string ans="";
    cin>>s;
    for (int i=0;i<s.length();i++) {
    int j = 0;
    for (j = 0; j < i; j++) {
      if (s[i] == s[j])
      {
        break;
      }
    }
    if (i == j) {
      ans += s[i];
    }
  }
  if(ans.length()%2!=0)
  cout<<"IGNORE HIM!";
  else 
  cout<<"CHAT WITH HER!";
  return 0;
}
