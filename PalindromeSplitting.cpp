#include <bits/stdc++.h>
using namespace std;
int solved(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int s=0;
    int e=n-1;
    int count=0;
    int maxi = INT_MIN;
    while(s<e){
        if(arr[s]==arr[e]){
            s++;
            e--;
        }else if(arr[s]>arr[e]){
            arr[s]=arr[s]-arr[e];
            e--;
            count++;
        }else{
            arr[e]=arr[e]-arr[s];
            s++;
            count++;
        }
        maxi = max(maxi,count);
        cout<<maxi<<endl;
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