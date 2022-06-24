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
	string s;
	cin >> n >> s;
	vector<char> list;
	list.pb(s[0]);
	for(LL i=0;i<s.length()-1;i++){
		if(s[i]!=s[i+1]){
			list.pb(s[i+1]);
		}
	}
	set<LL> visited;
	for(LL i=0;i<list.size();i++){
		if(visited.count(list[i]) > 0){
			cout << "NO\n";
			return;
		}
		visited.insert(list[i]);
	}
	cout << "YES\n";
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	int t=1;
	cin >> t;
	while(t--)solve();
	return 0;
}
