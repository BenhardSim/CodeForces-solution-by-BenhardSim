/*By : Benhard Sim*/
#include <bits/stdc++.h>
using namespace std;
#define LL long long 
#define pb(x) push_back(x)
#define f first
#define s second
#define mp(x,y) make_pair(x,y)
#define fo(i, n) for (LL i = 0; i < n; i++)
typedef pair<LL,LL> ii;
typedef vector<LL> vi;

/*codeForce Round : #756 (Div. 2)*/

void solve(){
	LL n;
	cin >> n;
	vi num,res,ra,la;
	for(LL i=0;i<n;i++){
		LL temp;
		cin >> temp;
		num.pb(temp);
	}
	
	if(num[0] != n && num[n-1] != n){
		cout << -1 << "\n";
		return;
	}
	for(LL i=num.size()-1;i>=0;i--){
		cout << num[i] << " ";
	}
	cout << "\n";
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
