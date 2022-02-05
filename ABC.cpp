/*By : Benhard Sim*/
#include <bits/stdc++.h>
using namespace std;
#define LL long long 
#define pb(x) push_back(x)
#define f first
#define s second
#define mp(x,y) make_pair(x,y)
#define fo(i, n) for (LL i = 0; i < n; i++)
typedef pair<LL,LL> ii;
typedef vector<LL> vi;

/*codeForce Round : # (Div. )*/

void solve(){
	string s,n;
	cin >> n >> s;
	if(s.length()>2)cout << "NO\n";
	else if(s.length() == 2 && s[0]==s[1]) cout <<"NO\n";
	else cout << "YES\n";
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
