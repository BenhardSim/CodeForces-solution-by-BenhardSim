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

/*codeForce Round : # (Div. )*/

void solve(){
	
	LL n;
	cin >> n;
	map<LL,LL>dic;
	vi num;
	LL big=-1;
	for(LL i=1;i<=n;i++){
		LL temp;
		cin >> temp;
		if(dic[temp] != 0){
			big = max(n-i+dic[temp],big);
		}
		dic[temp]=i;
	} 
	
	cout << big << "\n";
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	int t=1;
	cin >> t;
	while(t--){
		solve();
	}
	
	return 0;
}
