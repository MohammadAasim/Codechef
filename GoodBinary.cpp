#include <bits/stdc++.h>
using namespace std;
int solved(){
    string str;
    cin>>str;
    int n=str.size();
    if(str[0]==str[n-1]){
        cout<<n-2<<endl;
    }else{
        cout<<2<<endl;
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