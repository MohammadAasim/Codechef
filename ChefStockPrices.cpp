#include <iostream>
using namespace std;
void solved(){
    double S, A, B, C;
    cin>>S>>A>>B>>C;
    double amount = S + ((S*C)/100);
    //cout<<amount;
    if(amount>=A && amount<=B){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    solved();
	}
	return 0;
}
