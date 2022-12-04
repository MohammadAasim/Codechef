#include <iostream>
using namespace std;
int luckyNumber(int n){
    int x = 0;
    int p;
    while (n){
        n /= p;
        x += n;
    }
    return x;
}
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    cout<<luckyNumber(n)<<endl;
	}
	return 0;
}
