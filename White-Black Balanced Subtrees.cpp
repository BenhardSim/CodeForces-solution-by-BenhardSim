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
	string s;
	vi num(n);
	num[0]=1;
	set<LL> parent;
	parent.insert(1);
	for(LL i=1;i<n;i++){
		cin >> num[i];
		parent.insert(num[i]);
	}
	map<LL,vi> tree;
	for(LL i=1;i<n;i++){
		tree[num[i]].pb(i+1);
	}
	cin >> s;
	LL tot=0;
	for(auto j:parent){
		LL w=0,b=0;
		LL current=j;
		for(LL i=0;i<tree[current].size();i++){
			if(s[tree[current][i]]=='W')w++;
			else b++;
		}
		if(w==b && w!=0 && b!=0)tot++;
	}
	
	cout << tot << "\n";
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	int t=1;
	cin >> t;
	while(t--)solve();
	return 0;
}
