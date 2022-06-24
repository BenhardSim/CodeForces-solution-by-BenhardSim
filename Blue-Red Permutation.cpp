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
#define INF 10e18+7
#define __gcd gcd
#define PI 3.14159265
#define __builtin_popcountll bpl
typedef pair<LL,LL> ii;
typedef vector<LL> vi;


/*codeForce Round : # (Div. )*/

void solve(){

	LL n;
	cin >> n;
	string clr;
	vi num(n),blu,red;
	fo(i,n)cin >> num[i];
	cin >> clr;
	fo(i,n){
		if(clr[i]=='B')blu.pb(num[i]);
		else red.pb(num[i]);
	}
	sort(blu.begin(),blu.end());
	sort(red.begin(),red.end());
	for(LL i=0;i<blu.size();i++){
		if(blu[i] < i+1){
			cout << "NO\n";
			return;
		}
	}
	for(LL i=0;i<red.size();i++){
		LL temp = (i+blu.size()+1);
		if(red[i] > temp){
			cout << "NO\n";
			return;
		}
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
