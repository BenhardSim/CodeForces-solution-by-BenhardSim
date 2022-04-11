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
#define foi(i, a, n) for (LL i = a; i < n; i++)
#define INF 10e10+7
#define __gcd gcd
#define PI 3.14159265
#define __builtin_popcountll bpl
typedef pair<LL,LL> ii;
typedef vector<LL> vi;


/*codeForce Round : # (Div. )*/

void solve(){

	LL n;
	cin >> n;
	LL gcdM=0;
	fo(i,n){
		LL temp;
		cin >> temp;
		gcdM = gcd(gcdM,temp);
	}

	LL tot=0;
	for(LL i=1;i*i<=gcdM;i++){
		if(gcdM%i==0){
			tot++;
			if(i!=(gcdM/i))tot++;
		}
	}

	cout << tot << "\n";
	
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	int t=1;
//	cin >> t;
	while(t--)solve();
	return 0;
}
