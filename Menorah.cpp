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

/*codeForce Round : # (Div. )*/

void solve(){
	
	string s1,s2;
	LL n;
	cin >> n;
	cin >> s1 >> s2;
	LL total1 = 0,total2 = 0,zero1 = 0,zero2 = 0;
	for(LL i =0;i<n;i++){
		if(s1[i] == '0')zero1++;
		if(s2[i] == '0')zero2++;
	}
	for(LL i=0;i<n;i++){
		if(s1[i] == s2[i])total1++;
		if(s1[i] != s2[i])total2++;
	}
	
	if(n-zero1 == 0 && n-zero2 == 0){
		cout << 0 << "\n";
	}else if(zero1 != n){
		cout << min(total1,total2) << "\n";
	}else {
		cout << -1 << "\n";
	}


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
