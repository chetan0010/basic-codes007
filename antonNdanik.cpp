#include<iostream>
using namespace std;
int main(){
    int n;int a=0; 
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='A')
        a++;
        
    }
    if(a>n-a)
    cout<<"Anton"<<endl;
    else if(a<n-a) cout<<"Danik"<<endl;
    else
    cout<<"Friendship"<<endl;
    return 0;
}
