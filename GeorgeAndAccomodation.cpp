#include<iostream>
using namespace std;
int main()
{
    int n;int c=0;
    cin>>n;
    while(n--){
        int p=0,q=0;
        cin>>p>>q;
        if(q-p>=2)
        c++;
    }
    cout<<c;
    return 0;
    
}
