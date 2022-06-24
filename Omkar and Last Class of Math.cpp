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
	LL minv = INF,a,b,val;
	vi num;
	for(LL i=1;i*i<=n;i++){
		if(n%i==0){
			num.pb(i);
			if(i!=n/i)num.pb(n/i);
		}
	}
	for(LL i=0;i<num.size();i++){
		val = lcm(num[i],n-num[i]);
		if(minv > val && val!=0){
			minv = val;
			a=num[i];
			b=n-num[i];
		}
	}
	cout << a << " " << b << "\n";
	
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	int t=1;
	cin >> t;
	while(t--)solve();
	return 0;
}
