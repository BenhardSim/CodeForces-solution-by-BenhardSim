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
#define MOD 10e9 + 7
typedef pair<LL,LL> ii;
typedef vector<LL> vi;

long long lcm(int a, int b){
    return (a / gcd(a, b)) * b;
}

/*codeForce Round : # (Div. )*/

void solve(){

	LL n;
	cin >> n;
	map<LL,LL> adlist;
	vi num1(n),num2(n);
	fo(i,n)cin >> num1[i];
	fo(i,n)cin >> num2[i];
	fo(i,n)adlist[num1[i]] = num2[i];
	
	LL tot=1;
	LL mod=1e9+7;
	set<LL> visited;
	for(LL i=0;i<n;i++){
		if(visited.count(num1[i]) == 0){
			tot*=2;
			tot=tot%mod;
		}
		else continue;
		
		stack<LL> que;
		que.push(num1[i]);
		LL current;
		while(que.size() > 0){
			current = que.top();
			que.pop();
			visited.insert(current);
			if(visited.count(adlist[current]) == 0){
				que.push(adlist[current]);
			}
		}
	}

	cout << tot<<"\n";
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	int t=1;
	cin >> t;
	while(t--)solve();
	return 0;
}














