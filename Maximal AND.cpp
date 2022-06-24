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

long long lcm(int a, int b){
    return (a / gcd(a, b)) * b;
}

/*codeForce Round : # (Div. )*/

void solve(){

	LL n,k;
	cin >> n >> k;
	vi num(n),fre(32,0),res;
	fo(i,n)cin >> num[i];
	for(LL i=0;i<=31;i++){
		for(LL j=0;j<n;j++){
			if((num[j]>>i)&1)fre[i]++;
		}
	}
	for(LL i=30;i>=0;i--){
		if(fre[i]==n)res.pb(i);
		else{
			if(k!=0 && k < n-fre[i])continue;
			else if(k!=0 && k >= n-fre[i]){
				k-=(n-fre[i]);
				res.pb(i);
			}
		}
	}
	LL tot=0;
	for(LL i=0;i<res.size();i++){
		tot+=pow(2,res[i]);
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
