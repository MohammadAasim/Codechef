#include <bits/stdc++.h>
using namespace std;
int solved(){
    int t,a,b,x,y;
    cin>>t>>a>>b>>x>>y;
    int p = min(a,t-a+1);
    int q = min(b,t-b+1);
    int c = min(x,t-x+1);
    int d = min(y,t-y+1);
    int ans = min(abs(x-a)+abs(y-b), min(c,d)+min(p,q));
    return ans;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        cout<<solved()<<endl;
    }
    return 0;
}   