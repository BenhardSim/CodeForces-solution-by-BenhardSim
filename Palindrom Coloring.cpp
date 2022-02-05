/*By : Benhard Sim*/
#include <bits/stdc++.h>
using namespace std;
#define LL long long 
#define pb(x) push_back(x)
#define f first
#define s second
#define mp(x,y) make_pair(x,y)
typedef pair<LL,LL> ii;
typedef vector<LL> vi;

/*codeForce Round : #764 (Div. 3)*/

void solve(){
	LL n,m;
	cin >> n >> m;
	map<char,LL> hash;
	for(LL i=0;i<n;i++){
		char temp;
		cin >> temp;
		hash[temp]++;
	}
	LL pair=0,in=0;
	for(auto j : hash){
		pair += j.second/2;
		in += j.second%2;
	}
	
	LL val = pair/m;
	val*=2;
	if((pair%m)*2 + in >= m){
		val++;
	}
	cout << val << "\n";

	return;
}

int main(){
	
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	
	return 0;
	
}
