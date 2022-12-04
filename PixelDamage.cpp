#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int h,w,x,y,k;
	    cin>>h>>w>>x>>y>>k;
        int d= sqrt(pow(w - x, 2) + pow(h - y, 2) * 1.0);
	    if(d<k){
	        cout<<1<<endl;
	    }else{
	        cout<<0<<endl;
	    }
	}
	return 0;
}
