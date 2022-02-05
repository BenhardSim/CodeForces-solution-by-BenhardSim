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

/*Educational codeForce Round : #120 (Div. 2)*/

void solve(){
	LL a,b,c;
	string val;
	cin >> a >> b >> c;
	
	if(a!=b && a!= c && b!=c){
		LL big = max(a,max(b,c));
		if(big == (a+b+c)-big)val = "YES";
		else val="NO";
	}
	
	else if(a==b && c%2 == 0)val = "YES";
	else if(c==b && a%2 == 0)val = "YES";
	else if(a==c && b%2 == 0)val = "YES";
	else val = "NO";
	cout << val << "\n";
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	
	return 0;
}
