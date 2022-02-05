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
	LL a,b,c;
	cin >> a  >> b >> c;
	LL k=1e9+7, small = min(a,min(b,c));
	if((a+b+c)%9 == 0)k=(a+b+c)/9;
	if(small>=k)cout << "YES\n";
	else cout << "NO\n";
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
