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
#define INF 10e9+7
#define PI 3.14159265
#define bpl __builtin_popcountll
#define gcd __gcd 
typedef pair<LL,LL> ii;
typedef vector<LL> vi;

long long gcd(long long int a, long long int b){
  if (b == 0)
    return a;
  return gcd(b, a % b);
}

long long lcm(int a, int b){
    return (a / gcd(a, b)) * b;
}

/*codeForce Round : # (Div. )*/

void solve(){

	LL n,k;
	string s;
	cin >> n >> s;
	cin >> k;
	vector<char> spe(k);
	fo(i,k)cin >> spe[i];
	
	vi pos;
	for(LL i=0;i<s.length();i++){
		for(LL j=0;j<k;j++){
			if(s[i]==spe[j])pos.pb(i);
		}
	}
	LL res=0,init=0;
	for(LL i=0;i<pos.size();i++){
		LL dis=pos[i]-init;
		init=pos[i];
		res=max(res,dis);
	}
	cout << res << "\n";
	
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	int t=1;
	cin >> t;
	while(t--)solve();
	return 0;
}
