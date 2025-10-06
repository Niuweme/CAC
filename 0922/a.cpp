#include <bits/stdc++.h>
using namespace std;

#define enl "\n"

void solve(){
	string z;
	cin>>z;
	if(z.size() > 10){
		cout<<z[0]<<(z.size()-2)<<z[z.size()-1]<<enl;
	}
	else{
		cout<<z<<enl;
	}
	return;
}


int main(){

	int q;
	cin>>q;
	while(q--){
		solve();
	}
	return 0;
}
