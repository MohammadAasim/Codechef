#include <bits/stdc++.h>
using namespace std;
int solved(){
    int x,y;
    cin>>x>>y;
    if(x==1){
        return 0;
        //continue;
    }
    int arr[x];
    for(int i=0;i<x;i++){
        arr[i]=i+1;
    }
    int l=0,r=x-1;
    while(y--){
        swap(arr[l],arr[r]);
        l++;
        r--;
    }
    int count=0;
    for(int i=0;i<x;i++){
        for(int j=i+1;j<x;j++){
            if(arr[i]>arr[j]){
                count++;
            }
        }
    }
    return count;
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