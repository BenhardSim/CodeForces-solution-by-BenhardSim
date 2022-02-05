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

/*codeForce Round : # (Div. )*/

void solve(){
	LL n;
	cin >> n;
	vector<char> str,res;
	for(LL i=0;i<n;i++){
		char temp;
		cin >> temp;
		str.pb(temp);
	}
	res.pb(str[0]);
	for(LL i=1;i<str.size();i++){
		if(str[i] < str[i-1] || (str[i] <= str[i-1] && i!=1))res.pb(str[i]);
		else break;
	}
	for(LL i=0;i<res.size();i++){
		cout << res[i];
	}
	for(LL i=res.size()-1;i>=0;i--){
		cout << res[i];
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
