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
#define __builtin_popcountll bpl
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
LL base;
map<LL,LL> dp;

LL res(int init, int tot){
	if(dp[init]!=0)return dp[init];
	if(init == tot)return 1;
	else if(init > tot)return 0;
	LL tots=0,temp;
	if(tot > 9)temp=9;
	else temp=tot;
	for(LL i=1;i<=temp;i++){
		tots += res(init+i,tot);
	}
	dp[init]=tots;
	return dp[init];
}

void solve(){

	LL n,s=9;
	cin >> n;
	LL base = min(n,s);
	LL ans = res(1,5);
	cout << ans << "\n";
	

	
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	int t=1;
	cin >> t;
	while(t--)solve();
	return 0;
}
