#include<iostream>
using namespace std;
int main(){
    long long s=0;long long d=0;
    long n;
    cin>>n;
    for(long i=1;i<=n;i=i+2)
    {
        s=s+i;
    }
    for(long i=2;i<=n;i=i+2)
    {
        d=d+i;
    }
    cout<<d-s;
    
    return 0;
}
