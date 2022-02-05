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

/*codeForce Round : #763 (Div. 2)*/

void solve(){
	LL n,m,rb,cb,rd,cd,time=0;
	int rsp = 1, csp = 1;
	cin >> n >> m >> rb >> cb >> rd >> cd;
	while(rb!=rd && cb != cd){
		if(rb+1>n || rb-1<0)rsp*=-1;
		if(cb+1>m || cb-1<0)csp*=-1;
		rb+=rsp;
		cb+=csp;
		time++;
	}
	
	cout << time << "\n";
}


int main(){
	
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	
	return 0;
}
