#include<iostream>
using namespace std;
int main(){
    long long n;long long d=0;
    cin>>n;
    if(n%2==0) d=n/2;
    else
    d=(-1)*((n+1)/2);
    cout<<d;
    
    
    return 0;
}
