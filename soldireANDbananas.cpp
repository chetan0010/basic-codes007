#include<iostream>
using namespace std;
int main(){
    int k,m,n;
    cin>>k>>m>>n;
    int s=0;
    for(int i=1;i<=n;i++)
    {
        s+=i*k;
    }
    if(s>m)
    cout<<s-m;
    else 
    cout<<0;
    return 0;
}
