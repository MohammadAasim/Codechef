#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	   long long int x,y,z;
	   cin>>x>>y>>z;
	   if(x+y==z || x==y+z || x+z==y){
	       cout<<"YES"<<endl;
	   }else{
	       cout<<"NO"<<endl;
	   }
	}
	return 0;
}
