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
	vi num(n+1),leaf;
	set<LL> avl,vis;
	for(LL i=1;i<=n;i++){
		cin >> num[i];
		avl.insert(num[i]);
	}
	for(LL i=1;i<=n;i++){
		if(avl.count(i) == 0){
			leaf.pb(i);
		}
	}
	if(n==1){
		if(num[1]==1){
			cout << "1\n1\n1\n\n";
			return;
		}
		leaf.pb(num[1]);
	}
	cout << leaf.size() << "\n";
	map<LL,vi>neig;
	for(LL i=0;i<leaf.size();i++){
		LL temp=num[leaf[i]];
		neig[leaf[i]].pb(leaf[i]);
		while(vis.count(temp) == 0){
			vis.insert(temp);
			neig[leaf[i]].pb(temp);
			temp=num[temp];
		}
	}
	for(auto j : neig){
		cout << j.s.size() << "\n";
		for(LL i=j.s.size()-1;i>=0;i--){
			cout << neig[j.f][i] << " ";
		}
		cout << "\n";
	}
	cout << "\n";
	
	
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	int t=1;
	cin >> t;
	while(t--)solve();
	return 0;
}
