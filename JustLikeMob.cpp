#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,m,k,x;
        cin>>n>>m>>k>>x;
        int temp = n*k+m;
        if(x%temp==0){
            cout<<"YES"<<endl;
        }else if((x%temp)-(n*(k-1))>0){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}   