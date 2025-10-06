#include <bits/stdc++.h>

using namespace std;

#define ss second
#define ff first
#define pb push_back
#define all(s) s.begin(), s.end()
#define rall(s) s.rbegin(), s.rend()
#define enl "\n"
#define fast                 \
    ios::sync_with_stdio(0); \
    cout.tie(0);             \
    cin.tie(0);
#define sz(s) int(s.size())
#define fore(i, n) for (int i = 0; i != n; ++i)
#define foreach(i, vec) for (auto i = vec.begin(); i != vec.end(); ++i)
#define arre cout << "YES" << enl;
#define nel cout << "NO" << enl;
#define neg cout << -1 << enl;
// asendente
#define srt(s) sort(all(s));
// desendente
#define rsrt(s) sort(rall(s));
// lowerbound
#define lower(vec, s) lower_bound(vec.begin(), vec.end(), s)
// upperbound
#define upper(vec, s) upper_bound(vec.begin(), vec.end(), s)
 
typedef long long lli;
typedef pair<lli, lli> ii;
typedef vector<char> vhar;
typedef vector<lli> vl;
typedef vector<int> vi;
typedef vector<vi> vvi;

void solve(){
	int n;
	cin>>n;
	vi strengths(n);
	for(int i = 0; i<n; i++){
		cin>>strengths[i];
	}
	vi cstrengths = strengths;
	rsrt(cstrengths);
	for(int i = 0; i<n; i++){
		if(strengths[i]==cstrengths[0]){
			cout<<strengths[i]-cstrengths[1]<<" ";
		}
		else{
			cout<<strengths[i]-cstrengths[0]<<" ";
		}
	}
	cout <<enl;
}


int main(){
	
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}









