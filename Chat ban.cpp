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

/*edu codeForce Round : #117 (Div. 2)*/

void solve(){
	
	LL total=0,k,x,res;
	cin >> k >> x;
	LL left=0 , right=2*k-1, mid;
	while(left < right){
		mid=(left+right)/2;
		LL up,ktot,big;
		big = (k*(2 + (k-1)))/2;
		if(mid<=k) up = (mid*(2 + (mid-1)))/2;
		else up = big + ((mid-k)*(2*(k-1) + ((mid-k)-1)*(-1)))/2;

		if(up >= x) right = mid;
		else left = mid+1;
	}
	cout << right << "\n";
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
