#include<bits/stdc++.h>
using namespace std;
int main()
{
   string s;
   cin>>s;
   int l=0;int u=0;
   for(int i=0;i<s.size();i++){
	    if(isupper(s[i])){
	        u++;
	    }else{
	        l++;
	    }
	}
	if(u>l){
	    char ch;
	    for(int i=0;i<s.size();i++){
	        ch=toupper(s[i]);
	        cout<<ch;
	    }
	}else{
	    char ch;
	    for(int i=0;i<s.size();i++){
	        ch=tolower(s[i]);
	        cout<<ch;
	    }
	}
   return 0;
}
