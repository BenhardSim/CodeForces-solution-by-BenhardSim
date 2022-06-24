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
	cin >> n >> k;
	vi num(n);
	map<LL,LL> loc;
	loc[0]=-1;
	fo(i,n)cin >> num[i];
	LL sum=0;
	LL ans=-1;
	for(LL i=0;i<n;i++){
		sum+=num[i];
		if(loc.count(sum-k)){
			ans=max(ans,i-loc[sum-k]);
		}if(loc.count(sum)==0) loc[sum]=i;
	}
	
	if(ans==-1)cout << ans << "\n";
	else cout << n-ans << "\n";
	
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	int t=1;
	cin >> t;
	while(t--)solve();
	return 0;
}


