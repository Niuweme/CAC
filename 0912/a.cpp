#include <bits/stdc++.h>
using namespace std;

//define enl "\n"

int mmlona( int a, int b, int c){
	vector<int> v;
	v.push_back(a);
	v.push_back(b);
	v.push_back(c);
	sort(v.begin(), v.end());
	cout<<v[0]*v[1]<<endl;
	return 0;
}


int main(){
	int n, b, c;
	cin >>n >>b >>c;
	/*
	if(n>b && n>c){
		cout <<n<<endl;
	}
	else if (b>n && b>c){
		cout <<b<<endl;
	}
	else{
		cout <<c<<endl;
	}
*/
	mmlona(n, b, c);
	return 0;
 }
