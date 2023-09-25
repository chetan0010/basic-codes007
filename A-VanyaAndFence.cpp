#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,h;
    cin>>n>>h;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];int s=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>h)
        s+=2;
        else 
        s=s+1;
    }
    cout<<s<<endl;
    return 0;
    
    

    
}
