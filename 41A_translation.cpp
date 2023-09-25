#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,t;
    cin>>s>>t;
    int i=0;int j=t.length();
    for(int k=0;k<s.length();k++)
    {
        if(s[i]!=t[j-1])
        {
            cout<<"NO"<<endl;
            return 0;
        }
        i++;
        j--;
    }
    cout<<"YES"<<endl;
    return 0;
    
}
