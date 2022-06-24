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
#define INF 10e18+7
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
	vector<ii> num(n);
	fo(i,n){
		LL temp;
		cin >> temp;
		num[i].f=temp;
		num[i].s=i+1;
	}
	sort(num.begin(),num.end());
	vector<pair<ii,LL>> res;
	for(LL i=n-1;i>=1;i--){
		if(num[i].f>0){
			res.pb(mp(mp(num[i-1].s,num[i].s),num[i-1].f));
			ii temp = num[i];
			num[i].f=0;
			num[i-1].s=temp.s;
			num[i-1].f=(temp.f-num[i-1].f);
		}
	}
	LL tot=0;
	for(LL i=0;i<res.size();i++)tot+=res[i].s;
	
	cout << tot << "\n";
	for(LL i=0;i<res.size();i++){
		for(LL j=0;j<res[i].s;j++){
			cout << res[i].f.f << " " << res[i].f.s << "\n";
		}
	}	
	
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	int t=1;
	cin >> t;
	while(t--)solve();
	return 0;
}
