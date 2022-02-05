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

/*codeForce Round : #757 (Div. 2)*/

void solve(){
	
	LL n;
	cin >> n;
	vi dist;
	vector<pair<LL,LL>> num,res;
	for(LL i=0;i<n;i++){
		LL temp;
		cin >> temp;
		num.pb(mp(temp,i+1));
	}
	sort(num.begin(),num.end());
	LL temp = 1;
	for(LL i=0;i<num.size();i++){
		dist.pb(temp);
		if((i+1)%2 == 0)temp++;
	}
	sort(dist.begin(),dist.end(),greater<>());
	LL total = 0;
	for(LL i=0;i<dist.size();i++){
		total+=(num[i].f*dist[i]);
		res.pb(mp(num[i].s,dist[i]));
	}
	cout << total*2 << "\n";
	sort(res.begin(),res.end());
	cout << 0 << " ";
	set<LL> visited;
	for(LL i=0;i<res.size();i++){
		if(visited.count(res[i].s) == 0){
			cout << 0+res[i].s << " ";
			visited.insert(res[i].s);
		}else{
			cout << 0-res[i].s << " ";
			visited.insert(res[i].s);
		}
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
