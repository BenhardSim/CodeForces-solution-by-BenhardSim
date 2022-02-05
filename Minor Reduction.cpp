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

/*Edu codeForce Round : #121 (Div. 2)*/

void solve(){
	string s;
	LL big = 0,in=0;
	cin >> s;
	for(LL i=0;i<s.length()-1;i++){
		if((s[i]-'0')+(s[i+1]-'0') >= 10)in = i;
	}
	for(LL i=0;i<in;i++){
		cout << s[i];
	}
	cout << (s[in]-'0') + (s[in+1]-'0');
	for(LL i=in+2;i<s.length();i++){
		cout << s[i];
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
