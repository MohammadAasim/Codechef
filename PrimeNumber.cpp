#include <bits/stdc++.h>
using namespace std;
int solved(){
    int n;
    cin>>n;
    int count=0;
    for(int i=2;i<n/2;i++){
        if(n%i==0){
            count++;
        }
    }
    if(count<1){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        solved();
    }
    return 0;
}   