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

/*codeForce Round : #760 (Div. 3)*/

void solve(){
	LL n,k;
	cin >> n >> k;
	vi num;
	for(LL i=0;i<n;i++){
		LL temp;
		cin >> temp;
		num.pb(temp);
	}
	sort(num.begin(),num.end(),greater<>());

	LL score = 0 ;
	for(LL i=0;i<n;i++) if(i>k*2-1)score+=num[i];
	for(LL i=0;i<k;i++) score+=(min(num[i],num[i+k])/max(num[i],num[i+k]));
	
	cout << score << "\n";
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
