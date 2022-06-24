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
#define INF 10e6+7
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
	string s;
	cin >> s;
	vi psum(n+1);
	for(LL i=1;i<=n;i++){
		if(s[i-1]=='W')psum[i]=psum[i-1]+1;
		else psum[i]=psum[i-1];
	}
	LL minv=INF;
	for(LL i=k;i<=n;i++){
		minv = min(minv,psum[i]-psum[i-k]);
	}
	cout << minv << "\n";
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	int t=1;
	cin >> t;
	while(t--)solve();
	return 0;
}


