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
typedef pair<LL,LL> ii;
typedef vector<LL> vi;

bool isPT(LL x){
	return (x&&(!(x&(x-1))));
}

/*codeForce Round : #769 (Div. 2)*/

void solve(){
	LL big=0,n;
	cin >> n;
	for(LL i=0;i<n;i++){
		if(isPT(i) && i>big)big=i;
	}
	LL idx=0,num=1;
	while(idx<n){
		if(idx==big-1)cout << 0 << " ";
		else {
			cout << num << " ";
			num++;
		}
		idx++;
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
