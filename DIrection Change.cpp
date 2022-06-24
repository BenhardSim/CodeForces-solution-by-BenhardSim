/*By : Benhard Sim*/
#include <bits/stdc++.h>
using namespace std;

#define LL long long 
#define ull unsigned long long
#define pb(x) push_back(x)
#define f first
#define s second
#define mp(x,y) make_pair(x,y)
#define fo(i, n) for (LL i = 0; i < n; i++)
#define INF 10e10+7
#define __gcd gcd
#define PI 3.14159265
#define __builtin_popcountll bpl
typedef pair<LL,LL> ii;
typedef vector<LL> vi;

long long lcm(int a, int b){
    return (a / gcd(a, b)) * b;
}

/*codeForce Round : # (Div. )*/

void solve(){

	LL n,m;
	cin >> n >> m;
	LL big = max(m,n);
	LL sml = min(m,n);
	if(big>2&&sml==1){
		cout << "-1\n";
		return;
	}
	LL res = sml*2 - 1;
	LL rem=big-sml;
	if(rem%2==0)res += (big-sml)*2 - 1;
	else res += (big-sml)*2 - 2;

	cout << res << "\n";
	
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	int t=1;
	cin >> t;
	while(t--)solve();
	return 0;
}
