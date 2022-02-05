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
	LL n,h;
	cin >> n >> h;
	vi num;
	for(LL i=0;i<n;i++){
		LL temp;
		cin >> temp;
		num.pb(temp);
	}
	LL left=0,right=h;
	
	while(left+1!=right){
		LL mid=(left+right)/2;
		LL sum=mid;
		for(LL i=1;i<n;i++){
			sum+=min(num[i]-num[i-1],mid);
		}
		if(sum>=h)right=mid;
		else left=mid;
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
