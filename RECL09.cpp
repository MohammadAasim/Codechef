#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n){
    if(n==1){
        return true;
    }
    int count=0;
    for(int i=2;i<n/2;i++){
        if(n%i==0){
            count++;
        }
    }
    if(count<1){
        return true;
    }else{
        return false;
    }
}
int nthPrime(){
    int n;
    cin>>n;
    isPrime(n);
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