/*By : Benhard Sim*/
#include <bits/stdc++.h>
using namespace std;
#define LL long long 
#define pb(x) push_back(x)
#define f first
#define s second
#define mp(x,y) make_pair(x,y)
typedef pair<LL,LL> ii;
typedef vector<LL> vi;

/*codeForce Round : #761 (Div. 2)*/

void solve(){
	
	LL n;
	cin >> n;
	set<LL> visited;
	vi num,np;
	for(LL i=0;i<n;i++){
		LL temp;
		cin >> temp;
		if(temp<=n && visited.count(temp) == 0)visited.insert(temp);
		else num.pb(temp);
	}
	for(LL i=1;i<=n;i++){
		if(visited.count(i) == 0)np.pb(i);
	}
	
	sort(num.begin(),num.end());
	for(LL i=0;i<num.size();i++){
		if(num[i]%(num[i]-np[i]) != np[i]){
			cout << -1 << "\n";
			return;
		}
	}
	
	cout << num.size() << "\n";
	return;

	
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	int t=1;
	cin >> t;
	while(t--){
		solve();
	}
	
	return 0;
}
