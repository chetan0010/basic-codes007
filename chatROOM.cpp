
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    string h="hello";
    int j=0,k=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]==h[j])
        {
            j++;
            k++;
           
        }
         
    }
    if(k==h.length())
    cout<<"YES"<<endl;
    else 
    cout<<"NO"<<endl;
    return 0;
}
