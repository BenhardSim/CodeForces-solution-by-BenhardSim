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

	LL n;
	cin >> n;
	vi a(n),b(n),c(n);
	fo(i,n)cin >> a[i];
	fo(i,n)cin >> b[i];
	fo(i,n)cin >> c[i];
	map<LL,LL> dic;
	fo(i,n){
		if(b[i]!=a[i]){
			dic[b[i]]=a[i];
		}
	}
	set<LL> vis;
	LL tot=1;
	fo(i,n){
		if(c[i]!=0){
			vis.insert(c[i]);
			LL next=dic[c[i]];
			while(vis.count(next)==0){
				vis.insert(next);
				next=dic[next];
			}
		}
	}
	LL mod=1000000007;
	fo(i,n){
		if(c[i]==0){
			if(vis.count(b[i]) == 0 && b[i]!=a[i]){
				tot*=2;
				tot%=mod;
				vis.insert(b[i]);
				LL next=dic[b[i]];
					while(vis.count(next)==0){
						vis.insert(next);
						next=dic[next];
					}
			}
		}
	}
	
	cout << tot%mod << "\n";
	
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	int t=1;
	cin >> t;
	while(t--)solve();
	return 0;
}
