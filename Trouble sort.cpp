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

	LL n;
	cin >> n;
	vi num(n),val(n);
	fo(i,n)cin >> num[i];
	fo(i,n)cin >> val[i];
	LL cc=1;
	fo(i,n-1)if(num[i] > num[i+1])cc=0;
	if(cc){
		cout << "YES\n";
		return;
	}
	fo(i,n-1){
		if(val[i]!=val[i+1]){
			cout << "YES\n";
			return;
		}
	}
	cout << "NO\n";
	
	
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	int t=1;
	cin >> t;
	while(t--)solve();
	return 0;
}
