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

/*codeForce Round : #768 (Div. 2)*/

void solve(){
	LL n;
	cin >> n;
	vi num;
	fo(i,n){
		LL temp;
		cin >> temp;
		num.pb(temp);
	}
	reverse(num.begin(),num.end());
	LL last = num[0];
	LL idx=0,count=0,prev=0;
	while(idx<num.size()){
		if(num[idx]==last)idx++;
		else if(num[idx]!=last){
			idx*=2;
			count++;
		}
	}
	cout << count << "\n";
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
